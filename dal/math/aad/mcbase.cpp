//
// Created by wegam on 2021/7/11.
//

#include <dal/platform/strict.hpp>
#include <dal/math/aad/mcbase.hpp>
#include <dal/concurrency/threadpool.hpp>

namespace Dal {
    Time_  SYSTEM_TIME = 0.0;

    namespace {
        template <class T_>
        void PutParametersOnTapeT(const Vector_<T_*>&) {}

        template <>
        void PutParametersOnTapeT<Number_>(const Vector_<Number_*>& parameters) {
            for (Number_* param : parameters)
                param->PutOnTape();
        }
    }

    template <class T_>
    void Model_<T_>::PutParametersOnTape() {
        PutParametersOnTapeT<T_>(Parameters());
    }

    Vector_<Vector_<>> MCSimulation(
        const Product_<>& prd,
        const Model_<>& mdl,
        const RNG_& rng,
        const size_t& nPath) {
        REQUIRE(CheckCompatibility(prd, mdl), "model and product are not compatible");
        auto cMdl = mdl.Clone();
        auto cRng = rng.Clone();

        const size_t nPay = prd.PayoffLabels().size();
        Vector_<Vector_<>> results(nPath, Vector_<>(nPay));

        cMdl->Allocate(prd.TimeLine(), prd.DefLine());
        cMdl->Init(prd.TimeLine(), prd.DefLine());
        cRng->Init(cMdl->SimDim());
        Vector_<> gaussVec(cMdl->SimDim());
        Scenario_<> path;
        AllocatePath(prd.DefLine(), path);
        InitializePath(path);

        for (size_t i =0; i < nPath; ++i) {
            cRng->NextG(&gaussVec);
            cMdl->GeneratePath(gaussVec, &path);
            prd.Payoffs(path, &results[i]);
        }
        return results;
    }

    constexpr const int BATCH_SIZE = 64;

    Vector_<Vector_<>> MCParallelSimulation(
        const Product_<>& prd,
        const Model_<>& mdl,
        const RNG_& rng,
        const size_t& nPath) {
        REQUIRE(CheckCompatibility(prd, mdl), "model and product are not compatible");
        auto cMdl = mdl.Clone();

        const size_t nPay = prd.PayoffLabels().size();
        Vector_<Vector_<>> results(nPath, Vector_<>(nPay));

        cMdl->Allocate(prd.TimeLine(), prd.DefLine());
        cMdl->Init(prd.TimeLine(), prd.DefLine());

        ThreadPool_* pool = ThreadPool_::GetInstance();
        const size_t nThread = pool->NumThreads();
        Vector_<Vector_<>> gaussVecs(nThread + 1);
        Vector_<Scenario_<>> paths(nThread + 1);

        for(auto& vec: gaussVecs) vec.Resize(cMdl->SimDim());
        for(auto& path: paths) {
            AllocatePath(prd.DefLine(), path);
            InitializePath(path);
        }

        Vector_<std::unique_ptr<RNG_>> rng_s(nThread + 1);
        for(auto& random: rng_s) {
            random = rng.Clone();
            random->Init(cMdl->SimDim());
        }

        Vector_<TaskHandle_> futures;
        futures.reserve(nPath / BATCH_SIZE + 1);

        size_t firstPath = 0;
        size_t pathsLeft = nPath;

        while (pathsLeft > 0) {
            size_t pathsInTask = std::min<size_t>(pathsLeft, BATCH_SIZE);
            futures.push_back(pool->SpawnTask([&, firstPath, pathsInTask]() {
                const size_t threadNum = pool->ThreadNum();
                Vector_<>& gaussVec = gaussVecs[threadNum];
                Scenario_<>& path = paths[threadNum];

                auto& random = rng_s[threadNum];
                random->SkipTo(firstPath);

                for(size_t i = 0; i < pathsInTask; ++i) {
                    random->NextG(&gaussVec);
                    cMdl->GeneratePath(gaussVec, &path);
                    prd.Payoffs(path, &results[i]);
                }
            return true;
            }));
            pathsLeft -= pathsInTask;
            firstPath += pathsInTask;
        }

        for(auto& future: futures)
            pool->ActiveWaite(future);
        return results;
    }
}