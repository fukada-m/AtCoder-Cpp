# At Coderの問題をC++で解くためのDocker環境です。

## 使い方
- リポジトリをクローンしてディレクトリに移動します```git clone git@github.com:fukada-m/AtCoder-Cpp.git && cd AtCoder-Cpp``` 
- `src/`配下に実行したい`.cpp`ファイル[^1]を配置する。
- 標準入力したい値を`input/input.txt`を作成して記載する
- `docker compose up -d`でコンテナを立ち上げる
- VsCodeのDevContainers拡張を使ってVsCodeにコンテナをアタッチする
- `hello.cpp`開いてデバッグ実行する
- `hello.cpp`をコンパイルして実行したい場合は`cd /root/cpp`して`./c++exec.sh`を実行する
- 競技プログラミングサイトへのコード提出時は  ```ifstream inputFile("/root/cpp/input/input.txt");
  cin.rdbuf(inputFile.rdbuf());```の部分は削除してくだい

## カスタ水
- 実行したいファイルを変更したいときは`c++exec.sh`の`$file`を編集する
- デバッグ実行したいファイルを変更したいときは`launch.json`の`"program"`の値を変更する例：`program": "${WorkspaceFolder}/src/hello"`
- ver1.0.0(Hello world)が "hello world"を出力するお試しようになってます。
- ver2.0.0ではコンテナ環境でデバッグ実行できるようにしました。
- コンパイラにはg++を使っています。なぜなら、`include`をひとまとめにした `<bits/stdc++.h>`を使いたいからです。

[^1]: `hello.cpp`が実行できるようにセットアップしてあります。