# At Coderの問題をC++で解くためのDocker環境です。
ver2.00はコンテナ環境でデバッグ実行できるようにしました。

## 使い方
- ```git clone git@github.com:fukada-m/AtCoder-Cpp.git && cd AtCoder-Cpp``` 
- `src/`配下に実行したい`.cpp`ファイルを配置する。
- 標準入力したい値を`input1.txt`等に記載する
- `docker compose up`でコンテナを立ち上げる
- VsCodeのDevContainers拡張を使ってVsCodeにコンテナをアタッチする
- デバッグしたいファイルを開いてデバッグ実行する
- デバッグ無しでファイルをコンパイルして実行したい場合は`.env` に実行したいファイルのパスを環境変数`FILE`として記載する例：`FILE=hello.cpp`その後`cpp`を実行する

## 備考
- リリースタグ1.0.0(Hello world)が "hello world"を出力するお試しようになってます。
- コンパイラにはg++を使っています。なぜなら、`include`をひとまとめにした `<bits/stdc++.h>`を使いたいからです。
