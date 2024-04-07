#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

// 問題のURL
// https://atcoder.jp/contests/abc128/tasks/abc128_c

int main(){
    ifstream inputFile("/root/cpp/input/input.txt");
    cin.rdbuf(inputFile.rdbuf());
    
    int N, M, count = 0;
    cin >> N >> M;
    vector<vector<int>> S(M);
    vector<int> p(M);

    rep(i, 0, M){
        int k;
        cin >> k;
        rep(j, 0, k){
            int tmp;
            cin >> tmp;
            S[i].push_back(tmp);
        }
    }

    rep(i, 0, M){
        cin >> p.at(i);
    }

    // 全てのスイッチがオンオフになる組み合わせをそれぞれ考える
    for(int bit = 0; bit < (1 << N); bit++){
        bool flag = true;
        //全ての電球において考える
        rep(i, 0, M){
            // オンになってるスイッチを入れる配列
            vector<int> sw;
            // 全てのスイッチについて考える
            rep(j, 0, N){
                bool isExist = false;
                // スイッチが電球につながっているか考える
                rep(k, 0, S[i].size()) {
                    //対象のスイッチじゃなければcontineu;
                    if(j == (S[i][k] - 1)) isExist = true;
                }
                if (isExist == false) continue;
                // スイッチがonになっているか
                if(bit & (1 << j)){
                    sw.push_back(j);
                }
            }
            // 電球iのスイッチonになっているスイッチの数とpとが一致しなければ電球はつかない
            if (sw.size() % 2 != static_cast<size_t>(p[i])) flag = false;
        }
        // すべての電球がついていればカウント
        if (flag == true) count++;
    }

    cout << count;
}

// ただのメモ
// NはスイッチN個、Mは電球がM個
// 電球はK個のスイッチにつながっている
// 一個目の電球はk1で表されるスイッチと繋がっている
// onになっているスイッチの数を2で割ったあまりがPなら点灯
// すべての電球が点灯するスイッチの組み合わせの数を求める

// 電球１つずつスイッチの組み合わせで点灯するかチェックする

// bit全探索
// S[i]の値とonになっているスイッチを比べる
// 1つのスイッチの組み合わせがすべての電球で点灯していればカウント

