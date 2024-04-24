#!/bin/bash
file="sample"

g++ "root/cpp/src/$file.cpp" -o ".root/cpp/src/a.out"
./src/a.out
rm root/cpp/src/a.out