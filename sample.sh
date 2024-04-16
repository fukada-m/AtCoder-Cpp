#!/bin/bash
file="sample"

g++ "./src/$file.cpp" -o "./src/a.out"
./src/a.out
rm ./src/a.out