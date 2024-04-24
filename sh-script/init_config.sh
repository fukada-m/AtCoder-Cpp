#!/bin/bash
acc config default-task-choice all
acc config default-template cpp
acc login
oj login https://atcoder.jp/ -u $ATCODER_USER -p $ATCODER_PASS

# bashを起動してコンテナが終了するのを防ぐ
exec "$@"