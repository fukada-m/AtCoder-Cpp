#!/bin/bash

g++ "./src/${FILE}" && \
echo "==============input1====================" && \
./a.out < input/input1.txt && \
echo "" && \

# echo "==============input2====================" && \
# ./a.out < input/input2.txt && \
# echo "" && \

# echo "==============input3====================" && \
# ./a.out < input/input3.txt && \
# echo "" && \

rm ./a.out
