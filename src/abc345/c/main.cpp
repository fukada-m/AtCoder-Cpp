#include <bits/stdc++.h>
using namespace std;
#define rep(i, s, n) for (int i = (s); i < (int)(n); i++)



int main(){
  // ifstream inputFile("/root/cpp/input/input.txt");
  // cin.rdbuf(inputFile.rdbuf());
 
  string S;
  cin >> S;
  long long sum = 0, ans = 0;
  map<char, int> str;
  bool same = false;

  rep(i ,0, S.size()){
    str[S[i]]++;
  }

  for(auto s : str){
    sum += s.second;
  }

  for(auto s : S){
    if(str[s] > 1){
      same = true;
    }
    ans += sum - str[s];
  }

  ans = ans / 2;

  if(same){
    cout << ans + 1<< endl;
  }else{
    cout << ans << endl;
  }
}

// 自分と違う文字の数の合計 割る2 全体に同じ文字が2つ以上ある場合はプラス１