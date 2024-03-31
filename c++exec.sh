#!/bin/bash

g++ "./src/${FILE}" && \

echo $FILE "が実行された"
echo "==============outputの内容===================" && \
./a.out < input/input1.txt && \
echo "" && \

echo "==============inputの内容====================" && \
cat ./input/input1.txt && \

rm ./a.out
