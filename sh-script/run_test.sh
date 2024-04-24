#!/bin/bash

if [ "$#" -ne 2 ]; then
    echo "使用法は: $0 引数1:dirname 引数2:problemName"
    exit 1
fi

g++ "/root/cpp/src/$1/$2/main.cpp" -o "/root/cpp/src/$1/$2/a.out"
mv /root/cpp/src/$1/$2/tests /root/cpp/src/$1/$2/test
cd /root/cpp/src/$1/$2
oj t
cd /root/cpp