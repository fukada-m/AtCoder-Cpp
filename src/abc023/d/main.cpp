#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)



int main(){
  ifstream inputFile("/root/cpp/input/input.txt");
  cin.rdbuf(inputFile.rdbuf());
 
  int N;
  cin >> N;
  vector<pair<int, int>> baroon(N);
  rep(i, 0, N){
    int h, s;
    cin >> h >> s;
    baroon[i] = make_pair(h, s);
  }
  
  
  
}