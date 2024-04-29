#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

// 問題のURL
// https://atcoder.jp/contests/abc350/tasks/abc350_c

int main()
{
  ifstream inputFile("/root/cpp/input/input.txt");
  cin.rdbuf(inputFile.rdbuf());
  
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, 0, N) cin >> A[i];
  vector<int> sorted(N);
  sorted = A;
  sort(sorted.begin(), sorted.end());
  vector<pair<int, int>> ans;
  vector<int> table(N + 1);
  rep(i, 0, N) table[A[i]] = i + 1;

  rep(i, 0, N) {
    if (sorted[i] == A[i]){
      continue;
    }
    ans.push_back(make_pair(sorted[i], table[i+1]));
    int index1 = A[i];
    int index2 = table[i+1];
    swap(A[i], A[table[i+1]-1]); 
    table[A[i]] = i + 1;
    table[index1] = index2;
  }

  cout << ans.size() << endl;
  rep(i, 0, ans.size()){
    cout << ans[i].first << " " << ans[i].second << endl;
  }
}