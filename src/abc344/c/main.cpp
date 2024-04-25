#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)



int main(){
  // ifstream inputFile("/root/cpp/input/input.txt");
  // cin.rdbuf(inputFile.rdbuf());
 
  int N, M, L, Q, X;
  cin >> N;
  vector<long long> A(N);
  rep(i, 0, N) cin >> A[i];
  cin >> M;
  vector<long long> B(M);
  rep(i, 0, M) cin >> B[i];
  cin >> L;
  vector<long long> C(L);
  rep(i, 0, L) cin >> C[i];
  cin >> Q;
  set<long long> ans;

  rep(i, 0, N){
    rep(j, 0, M){
      rep(k, 0, L){
        ans.insert(A[i] + B[j] + C[k]);
      }
    }
  }

  rep(i, 0, Q){
    cin >> X;
    if (ans.count(X) > 0) {
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
}