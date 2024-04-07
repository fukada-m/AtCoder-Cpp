#!/bin/bash

g++ "./src/${FILE}" -o "./src/a.out"

echo $FILE "が実行された"
echo "==============outputの内容==================="
./src/a.out < input/input1.txt
echo ""

echo "==============inputの内容===================="
cat ./input/input1.txt

rm ./src/a.out