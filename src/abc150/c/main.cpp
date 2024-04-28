#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)



int main(){
  // テストと提出をする前にこの2行はコメントアウトしてね
  // ifstream inputFile("/root/cpp/input/input.txt");
  // cin.rdbuf(inputFile.rdbuf());
 
  int N;
  cin >> N;
  vector<int> P(N), Q(N), X(N);
  pair<int, int> index = make_pair(0, 0);

  rep(i, 0, N){
    cin >> P.at(i);
  }
  rep(i, 0, N){
    cin >> Q.at(i);
  }

  X = P;
  sort(X.begin(), X.end());
  int i = 0;
  do {
  if(P == X) index.first = i;
  if(Q == X) index.second = i;
  i++;
  } while(next_permutation(X.begin(), X.end()));
  cout << abs(index.first - index.second) << endl;
}