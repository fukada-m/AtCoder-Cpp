#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)



int main(){
  // テストと提出をする前にこの2行はコメントアウトしてね
  // ifstream inputFile("/root/cpp/input/input.txt");
  // cin.rdbuf(inputFile.rdbuf());
  vector<int> A(9), B(8);

  rep (i, 0, 9) {
    cin >> A[i];
  }
  rep (i, 0, 8) {
    cin >> B[i];
  }

  int sumA = 0, sumB = 0;
  rep (i, 0, 9) {
    sumA += A[i];
  }
  rep (i, 0, 8) {
    sumB += B[i];
  }
  int ans = sumA - sumB + 1;

  cout << ans << endl;
  
}