# At Coderの問題をC++で解くためのDocker環境です。

## 使い方
- ```git clone git@github.com:fukada-m/AtCoder-Cpp.git && cd AtCoder-Cpp``` 
- `src/`配下に実行したい`.cpp`ファイルを配置する。
- 標準入力したい値を`input/input.txt`を作成して記載する
- `docker compose up -d`でコンテナを立ち上げる
- VsCodeのDevContainers拡張を使ってVsCodeにコンテナをアタッチする
- デバッグしたいファイルを開いてデバッグ実行する
- デバッグ無しでファイルをコンパイルして実行したい場合は`cd /root/cpp`して`./c++exec.sh`を実行する

## 備考
- 実行したいファイルを変更したいときは`c++exec.sh`の`$file`を編集する
- ver1.0.0(Hello world)が "hello world"を出力するお試しようになってます。
- ver2.0.0ではコンテナ環境でデバッグ実行できるようにしました。
- コンパイラにはg++を使っています。なぜなら、`include`をひとまとめにした `<bits/stdc++.h>`を使いたいからです。
