#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)



int main(){
  // ifstream inputFile("/root/cpp/input/input.txt");
  // cin.rdbuf(inputFile.rdbuf());
  int N;
  ll sum = 0, K;
  cin >> N >> K;
  vector<int> A(N);
  set<ll> S;
  rep(i, 0, N){
    ll a;
    cin >> a;
    S.insert(a);
  } 
  for(auto s : S){
    if (s <= K){
      sum += s;
    }
  }
  sum *= -1;
  sum += (K*(K+1))/2;
  cout << sum << endl;
}