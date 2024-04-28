#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)



int main(){
  // テストと提出をする前にこの2行はコメントアウトしてね
  // ifstream inputFile("/root/cpp/input/input.txt");
  // cin.rdbuf(inputFile.rdbuf());
  
  int N, Q;
  string S;
  cin >> N >> S >> Q;
  map<char, char> table = {
    {'a', 'a'}, {'b', 'b'}, {'c', 'c'}, {'d', 'd'}, {'e', 'e'}, {'f', 'f'}, {'g', 'g'}, {'h', 'h'}, {'i', 'i'}, {'j', 'j'}, {'k', 'k'}, {'l', 'l'}, {'m', 'm'}, {'n', 'n'}, {'o', 'o'}, {'p', 'p'}, {'q', 'q'}, {'r', 'r'}, {'s', 's'}, {'t', 't'}, {'u', 'u'}, {'v', 'v'}, {'w', 'w'}, {'x', 'x'}, {'y', 'y'}, {'z', 'z'}
  };
  vector<pair<char, char>> query(Q);
  rep(i, 0, Q){
    cin >> query[i].first >> query[i].second;
  }
  rep(i, 0, Q){
    char a = query[i].first;
    char b = query[i].second;
    for(auto &t : table){
      if(t.second == a){
        t.second = b;
      }
    }
  }
  rep(i, 0, N){
    for(auto t : table){
      if(S[i] == t.first){
        S[i] = t.second;
        break;
      }
    }
  }
  cout << S << endl;
}

//Nは文字の長さ、Qはクエリの数
//各文字の場所をテーブルで管理してアクセスを簡単にしても大量の文字を動かすとTLEする
//すべてのアルファベットを表にしてに対してクエリを行い最後に変換する