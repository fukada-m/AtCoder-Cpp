#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)



int main(){
  // ifstream inputFile("/root/cpp/input/input.txt");
  // cin.rdbuf(inputFile.rdbuf());
 
  int N, T;
  cin >> N >> T;
  vector<int> A(T, 0), B(T, 0);
  vector<ll>currentScore(N, 0);
  map<ll, ll> scoreTable;
  set<ll> kind;
  rep(i, 0, T){
    cin >> A.at(i) >> B.at(i);
  }
  scoreTable[0] = N;
  kind.insert(0);

  rep(i, 0, T) {
    scoreTable[currentScore.at(A[i]-1)]--;
    if (scoreTable[currentScore.at(A[i]-1)] == 0) kind.erase(currentScore.at(A[i]-1));
    currentScore.at(A[i]-1) += B.at(i);
    scoreTable[currentScore.at(A[i]-1)]++;
    kind.insert(currentScore.at(A[i]-1));
    cout << kind.size() << endl; 

  }

}

// Nは選手の数、Tは経過時間
// Aは選手の番号、Bは選手が得られる点数
// 毎回点数は何種類か出力する