#!/bin/bash

g++ "./src/${FILE}" -o "./src/a.out"

echo $FILE "が実行された"
echo "==============outputの内容==================="
./src/a.out
echo ""

echo "==============inputの内容===================="
cat ./input/input.txt

rm ./src/a.out