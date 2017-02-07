#!/bin/bash
rmdir -f build/
mkdir build
cd build
cmake ..
make run_unit_tests
./run_unit_tests
