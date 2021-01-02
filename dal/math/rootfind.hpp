//
// Created by wegam on 2021/1/2.
//

#pragma once

#include <cmath>
#include <dal/platform/platform.hpp>
#include <dal/platform/strict.hpp>

namespace Dal {
    class RootFinder_ {
    public:
        virtual ~RootFinder_() = default;
        virtual double NextX() = 0;
        virtual void PutY(double) = 0;
        virtual double BracketWidth() const = 0;
    };

    struct Converged_ {
        double x_tol_, f_tol_;
        Converged_(double x_tol, double f_tol)
            :x_tol_(x_tol), f_tol_(f_tol) {}

        bool operator()(RootFinder_& t, double e) const {
            t.PutY(e);
            return std::fabs(e) < f_tol_ || t.BracketWidth() < x_tol_;
        }
    };

    struct PositiveIncreasing_ {
        double scale_;
        explicit PositiveIncreasing_(double s)
            :scale_(s) {}

        double operator()(double x) const {
            return scale_ * (x > 0.0 ? 1.0 + x : std::exp(x));
        }

        [[nodiscard]] double Inverse(double s) const {
            return s > scale_ ? s / scale_ - 1.0 : std::log(s / scale_);
        }
    };

    class BracketedBrent_ : public RootFinder_ {
        std::pair<double, double> a_, b_, c_;
        const double tol_;
        bool bisect_;
        double d_;

        friend class Brent_;
        explicit BracketedBrent_(double tol)
            :tol_(tol) {}

        void Initialize(const std::pair<double, double>& low, const std::pair<double, double>& high);

    public:
        BracketedBrent_(const std::pair<double, double>& low,
                        const std::pair<double, double>& high,
                        double tol);

        double NextX() override;
        void PutY(double y) override;
        double BracketWidth() const override {
            return std::fabs(a_.first - b_.first);
        }
    };

    class Brent_ : public RootFinder_ {
        enum class Phase_ {
            INITIALIZE,
            HUNT, BRACKETED
        } phase_;
        bool increasing_;
        double stepSize_, trialX_;
        std::pair<double, double> knownPoint_;
        BracketedBrent_ engine_;

    public:
        Brent_(double guess, double tol = Dal::EPSILON, double step_size = 0.0);
        double NextX() override;
        void PutY(double y) override;
        double BracketWidth() const override;
    };
}
