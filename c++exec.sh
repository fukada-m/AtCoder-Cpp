#!/bin/bash

g++ "./src/${FILE}" && \

echo $FILE "が実行された"
echo "==============inputの内容====================" && \
cat ./input/input1.txt && \
echo "" && \

echo "==============outputの内容===================" && \
./a.out < input/input1.txt && \
echo "" && \

rm ./a.out
