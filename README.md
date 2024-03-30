# At Coderの問題をC++解くためのDocker環境です。

## 使い方
- ```git clone git@github.com:fukada-m/AtCoder-Cpp.git && cd AtCoder-Cpp``` 
- src/配下に`.cpp`ファイルを配置する。
- `.env` に実行したいファイルのパスを環境変数`FILE`として記載する例：`FILE=hello.cpp`
- 標準入力したい値を`input1.txt`等に記載する
-   `docker compose up` でコンテナを起動する。プログラムの実行が終わるとコンテナは削除される
## 備考
- リリースタグ1.0.0が "hello world"を出力するお試しようになってます。