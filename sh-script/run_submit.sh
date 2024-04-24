#!/bin/bash

if [ "$#" -ne 2 ]; then
    echo "使用法は: $0 引数1:dirName 引数2:probrem"
    exit 1
fi

cd /root/cpp/src/$1/$2
acc submit