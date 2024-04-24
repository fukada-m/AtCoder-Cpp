# At Coder の問題を C++で解くための Docker 環境です

## 使い方

1. リポジトリをクローンしてディレクトリに移動します
   `git clone git@github.com:fukada-m/AtCoder-Cpp.git && cd AtCoder-Cpp`
2. `docker compose up -d`でコンテナを立ち上げる
3. VsCode の DevContainers 拡張を使って VsCode にコンテナをアタッチする
4. `cd cpp`
5. ログインする[^1]
   1. `acc login`
   2. `oj login https://beta.atcoder.jp/`
6. 問題をダウンロードする
   - ./sh-script/run_dl.sh
7. テストする
   - ./sh-script/run_test.sh
8. 提出する
   - ./sh-script/run_submit.sh

## リリースノート

- ver1.0.0(Hello world)が "hello world"を出力するお試しようになってます。
- ver2.0.0 ではコンテナ環境でデバッグ実行できるようにしました。
- ver3.0.0 では`Atcoder cli`と `Online judgement tool`を導入しました。

## Tips

- コンパイラには g++を使っています。理由は、`include`をひとまとめにした `<bits/stdc++.h>`を使いたいからです。

## メンテナー

X の ID：@patch88888

[^1]: 事前に Atcoder(https://atcoder.jp/)に登録している必要があります。
