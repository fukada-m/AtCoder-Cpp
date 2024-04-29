#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

//問題のURL
//https://atcoder.jp/contests/abc104/tasks/abc104_c

void rec(int score, vector<vector<int>> scoreTable, vector<int> &p, vector<int> &c, int G, int count, int index, vector<tuple<int, int, vector<int>>> &ans, vector<int> countTable){
  if(index >= p.size()) {
    ans.push_back(tuple(count, score, countTable));
    return;
  }

  rep(i, 0, 2) {
    score += scoreTable.at(index).at(i);
    score += p[index] * i * 100 * (index+1);
    if(scoreTable.at(index).at(i) != 0) {
      countTable[index] = 0;
    }
    rec(score, scoreTable, p, c, G, count += (p[index] * i), index + 1, ans, countTable); 
  }
  return;
}

int main()
{
  ifstream inputFile("/root/cpp/input/input.txt");
  cin.rdbuf(inputFile.rdbuf());
  
  int D, G;
  cin >> D >> G;
  vector<int> p(D), c(D);
  rep(i, 0, D) cin >> p[i] >> c[i];
  vector<vector<int>> scoreTable(D, vector<int>(2, 0));
  vector<int> countTable(D,0);
  rep(i, 0, D){
    scoreTable[i][1] = c[i];
    countTable[i] = p[i];
  }

  vector<tuple<int, int, vector<int>>> ans;

  rec(0,scoreTable, p, c, G, 0, 0, ans, countTable); 

  rep(i, 0, ans.size()) {
    while(get<1>(ans[i]) < G){
      for(int j = D; j > 0; j--){
        if(get<2>(ans[i])[j-1] == 0) continue;
        get<1>(ans[i]) += j * 100;
        get<0>(ans[i])++;
        get<2>(ans[i])[j-1]--;
        break;
      }
      if(accumulate(get<2>(ans[i]).begin(), get<2>(ans[i]).end(), 0) == 0)break;
    }
  }
  sort(ans.begin(), ans.end());
  cout << get<0>(ans[0]) << endl;
}

//問題の種類はD種類
//問題の点数はそれぞれ上から100, 200,300, ..., 1000点
//Pはそれぞれの問題の数
//Cは全問解いたときのボーナスポイント
//Gは目標点数
// 出力は解くべき最小の問題数

// それぞれの問題で、全問解くか解かないかを考えて足りない点数は最大得点の問題を解く
// ベースケース　D回 全問解くか解かないかを考える
// それぞれたりない点数は最高点の問題からp回足す
// カウントが少ないのが答え
