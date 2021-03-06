#!/bin/bash -e

num_cores=$(grep -c processor /proc/cpuinfo)
export DAL_DIR=$PWD
export LD_LIBRARY_PATH=$PWD/lib:$LD_LIBRARY_PATH
export BUILD_TYPE=Release

git submodule init
git submodule update

(
cd machinist2 || exit
bash -e ./build_linux.sh
)

export MACHINIST_TEMPLATE_DIR=$PWD/machinist2/template/
./machinist2/bin/Machinist -c config/dal.ifc -l config/dal.mgl -d ./dal

mkdir build
(
cd build || exit
cmake -DCMAKE_BUILD_TYPE=$BUILD_TYPE -DCMAKE_INSTALL_PREFIX="$DAL_DIR" ..
make clean
make -j"${num_cores}"
make install
)

bin/test_suite

echo "Finished building of Derivatives Algorithms Library"
