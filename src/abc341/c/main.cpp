#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)

pair<int, int> move(pair<int, int> current, char T) {
  if (T == 'U') {
    current.first--;
  } else if (T == 'D') {
    current.first++;
  } else if (T == 'L') {
    current.second--;
  } else if (T == 'R') {
    current.second++;
  }
  return current;

}

int main(){
  // ifstream inputFile("/root/cpp/input/input.txt");
  // cin.rdbuf(inputFile.rdbuf());

  int H, W, N, count = 0;;
  cin >> H >> W >> N; 
  vector<vector<char>>map(H, vector<char>(W));
  vector<char> T;
  rep(i, 0, N) {
    char t;
    cin >> t;
    T.push_back(t);
  }
  rep(i, 0, H) {
    string tmp;
    cin >> tmp;
    rep(j, 0, W) {
      map[i][j] = tmp[j];
    }
  }
  pair<int, int> current;
  rep(i,0, H){
    rep(j,0,W){
      if(map[i][j] == '.'){
        current = make_pair(i, j);
        bool flag = true;
        for(auto t : T){
          current = move(current, t);
          if(map[current.first][current.second] == '#'){
            flag = false;
            break;
          }
        }
        if(flag){
          count++;
        }
      }
    }
  }
        
  cout << count << endl;
}

