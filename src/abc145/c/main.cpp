#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)



int main(){
  // ifstream inputFile("/root/cpp/input/input.txt");
  // cin.rdbuf(inputFile.rdbuf());
 
  int N, ave = 0;
  double ans = 0;
  cin >> N;
  vector<pair<int, int>> dist(N);
  rep (i, 0, N) {
    cin >> dist[i].first >> dist[i].second;
  }
  sort(dist.begin(), dist.end());
  do {
    double sum = 0;
    rep (i, 0, N - 1) {
      sum += sqrt(pow(dist[i].first - dist[i + 1].first, 2) + pow(dist[i].second - dist[i + 1].second, 2));
    }
    ans += sum;
    ave++;
  } while (next_permutation(dist.begin(), dist.end()));
  ans /= ave;
  cout << fixed << setprecision(10);
  cout << ans << endl;
}