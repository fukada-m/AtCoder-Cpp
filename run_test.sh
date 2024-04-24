#!/bin/bash

if [ "$#" -ne 2 ]; then
    echo "使用法は: $0 引数1:dirname 引数2:problemName"
    exit 1
fi

g++ "./src/$1/$2/main.cpp" -o "./src/$1/$2/a.out"
mv ./src/$1/$2/tests ./src/$1/$2/test
cd src/$1/$2
oj t
cd ../../../