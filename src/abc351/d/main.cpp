#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

void rec(vector<pair<int, int>> start, int H, int W, vector<string> S){
  

int main(){
  // テストと提出をする前にこの2行はコメントアウトしてね
  ifstream inputFile("/root/cpp/input/input.txt");
  cin.rdbuf(inputFile.rdbuf());
 
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  vector<pair<int, int>> start;
  rep(i, 0, H){
    cin >> S.at(i);
  }
  
  rep(i, 0, H){
    rep(j, 0, W){
      if(S.at(i).at(j) == '#') continue;
      if(j != W-1 && S.at(i).at(j+1) == '#') continue;
      if(j != 0 && S.at(i).at(j-1) == '#') continue;
      if(i != H-1 && S.at(i+1).at(j) == '#') continue;
      if(i != 0 && S.at(i-1).at(j) == '#') continue;
      start.push_back(make_pair(i, j));
    }
  }   

  rec(start, H, H, S)
}