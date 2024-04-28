#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)



int main(){
  // テストと提出をする前にこの2行はコメントアウトしてね
  // ifstream inputFile("/root/cpp/input/input.txt");
  // cin.rdbuf(inputFile.rdbuf());
 
  int N, M, count = 0;
  cin >> N >> M;
  vector<pair<int, int>> ab(M);
  vector<int> permutation(N);
  rep(i, 0, M){
    int a, b;
    cin >> a >> b;
    ab[i] = make_pair(a, b);
  }
  rep(i, 0, N){
    permutation[i] = i + 1;
  }
  do {
    bool flag = true;
    rep(i, 0, N-1) {
        if(!flag) break;
        if(permutation[0] != 1) {
          flag = false;
          break;
        }
      rep(j, 0, M) {
        if((ab[j].first == permutation[i] && ab[j].second == permutation[i+1]) ||(ab[j].second == permutation[i] && ab[j].first == permutation[i+1])){
          flag = true;
          break;
        } else {
          flag = false;
        }
      }
    }
    if (flag) count++;
  } while(next_permutation(permutation.begin(), permutation.end()));
  cout << count << endl;
}

//順列の通りに全部の頂点を通れるか考える