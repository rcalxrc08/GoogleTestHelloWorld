#!/bin/bash
wget https://cmake.org/files/v3.7/cmake-3.7.2.tar.gz
tar -xzvf cmake-3.7.2.tar.gz
cd cmake-3.7.2/
cmake . > /dev/null
make > /dev/null    
sudo make install > /dev/null
cd ../

