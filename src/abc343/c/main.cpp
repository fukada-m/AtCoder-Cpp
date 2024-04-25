#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)



int main(){
  // ifstream inputFile("/root/cpp/input/input.txt");
  // cin.rdbuf(inputFile.rdbuf());
 
  long long N, ans = 0;
  cin >> N;
  


  for(long long i = 1; i * i * i <= N; i++){
    string S, reversS;
    S = to_string(i * i * i);
    reversS = S;
    reverse(reversS.begin(), reversS.end());
    if (S == reversS) {
      ans = max(ans, i);
    }
  }
  cout << ans * ans * ans<< endl;
}