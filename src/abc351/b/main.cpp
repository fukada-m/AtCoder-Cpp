#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)



int main(){
  // テストと提出をする前にこの2行はコメントアウトしてね
  // ifstream inputFile("/root/cpp/input/input.txt");
  // cin.rdbuf(inputFile.rdbuf());
 
  int N, x, y;
  cin >> N;
  vector<string> A(N), B(N);
  rep (i, 0, N) {
    cin >> A.at(i);
  }
  rep (i, 0, N) {
    cin >> B.at(i);
  }

  rep(i, 0, N) {
    if(A.at(i) == B.at(i)){
      continue;
    }else if(A.at(i) != B.at(i)){
      x = i;
    }
  } 
  rep(i, 0, A.at(i).size()){
    if(A.at(x).at(i) != B.at(x).at(i)){
      y = i;
      break;
    }
  }
  cout << x+1 << " " << y+1 << endl;
}