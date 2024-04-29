#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int rec(vector<int> &table, vector<int> pattern, vector<vector<vector<int>>> &A, int ans, int index, int N){
  if (index == N) {
    bool flag = true;
    rep(i, 0, N) {
      if(flag == false) break;
      rep(j, 0, A[i].size()){
        // 自分が親切なのに指摘が違ったらfalse
        if( pattern[i] == 1) {
          // 相手が親切なのに不親切だったらfalse
          if(A[i][j][1] == 1 && pattern[A[i][j][0] - 1] != 1) {
            flag = false;
            break;
          }
          // 相手が不親切なのに親切だったらfalse
          if(A[i][j][1] == 0 && pattern[A[i][j][0] - 1] != 0) {
            flag = false;
            break;
        } 
        }
      }
    }
    if(flag){
      return accumulate(pattern.begin(), pattern.end(), 0);
    }else {
      return 0;
    }
  }

  rep(i, 0, 2) {
    pattern.at(index) = table.at(i);
    ans =  max(ans, rec(table, pattern, A, ans, index + 1, N));
  }
  return ans;
}

int main(){
  ifstream inputFile("/root/cpp/input/input.txt");
  cin.rdbuf(inputFile.rdbuf());
  
  int N, index, ans = 0;
  cin >> N;
  vector<vector<vector<int>>> A(N);

  rep(i, 0, N) {
    cin >> index;
    rep(j, 0, index) {
      vector<int> a(2);
      cin >> a[0] >> a[1];
      A[i].push_back(a);
    }
  }
  vector<int> table = {0, 1}, pattern(N);

  ans = rec(table, pattern, A, 0, 0, N);
  cout << ans << endl;
}

// Nは親切か不親切のどちらか
// 存在しうる親切の最大数を出力
// 一人の人はi個の証言を持っているA[i]は証言の数
// yが1なら正直、0なら不親切
// 正直者と不親切の全パターンを試す
// 矛盾していない場合の親切な人の数を出力