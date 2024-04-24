#!/bin/bash
acc config default-task-choice all
acc config default-template cpp

// bashを起動してコンテナが終了するのを防ぐ
exec "$@"