#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)



int main(){
  // テストと提出をする前にこの2行はコメントアウトしてね
  // ifstream inputFile("/root/cpp/input/input.txt");
  // cin.rdbuf(inputFile.rdbuf());
 
  int N, head = 0, ans = 0;
  cin >> N;
  vector<ll> A(N), ball(N,-1);

  rep(i, 0, N){
    cin >> A.at(i);
  }
  rep(i, 0, N){
    ball.at(head) = A.at(i);
    head++;
    while(head >= 2 && head <= N){
      if(ball.at(head-1) == ball.at(head-2)){
        ball.at(head-1) = -1;
        ball.at(head-2)++;
        head--;
      } else {
        break;
      }
    }
  }
  for(auto b: ball){
    if(b > -1){
      ans++;
    }
  }
  cout << ans << endl;
}

// ボールの累乗が同じなら合体させて1つ上の累乗のボールにする
// 合体判定は常に最新の2個のボールについて考える
