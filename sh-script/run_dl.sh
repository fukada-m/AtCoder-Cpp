#!/bin/bash

if [ "$#" -ne 1 ]; then
    echo "使用法は: $0 引数1:probrem"
    exit 1
fi

cd /root/cpp/src
acc new $1
cd $1
touch AC-List.md