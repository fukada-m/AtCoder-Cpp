# At Coder の問題を C++で解くための Docker 環境です

## 使い方

1. リポジトリをクローンしてディレクトリに移動します
   `git clone git@github.com:fukada-m/AtCoder-Cpp.git && cd AtCoder-Cpp`
2. OJ のログイン情報を記載した.env を作成する[^1]
   1. cp `.env.example .env`
   2. ユーザー名とパスワードを書き換える
3. `docker compose up -d`でコンテナを立ち上げる
4. VsCode の DevContainers 拡張を使って VsCode にコンテナをアタッチする
5. `cd cpp`
6. AtCoder Cli にログインする
   - `acc login`
7. 問題をダウンロードする
   - ./sh-script/run_dl.sh abc101
8. デバッグ実行する
   1. input.txt に入力値を記載する
   2. VsCode のデバッグ実行を実行する
9. テストする
   1. main.cpp から以下の 2 行をコメントアウトする
   - ifstream inputFile("/root/cpp/input/input.txt");
   - cin.rdbuf(inputFile.rdbuf());
   2. ./sh-script/run_test.sh abc101 a
10. 提出する
    1. mian.cpp から以下の 2 行をコメントアウトする
    - ifstream inputFile("/root/cpp/input/input.txt");
    - cin.rdbuf(inputFile.rdbuf());
    2. ./sh-script/run_submit.sh abc101

## リリースノート

- ver1.0.0(Hello world)が "hello world"を出力するお試しようになってます。
- ver2.0.0 ではコンテナ環境でデバッグ実行できるようにしました。
- ver3.0.0 では`Atcoder cli`と `Online judgement tool`を導入しました。

## Tips

- コンパイラには g++を使っています。理由は、`include`をひとまとめにした `<bits/stdc++.h>`を使いたいからです。

## メンテナー

X の ID：@patch88888

[^1]: 事前に Atcoder(https://atcoder.jp/)に登録している必要があります。
