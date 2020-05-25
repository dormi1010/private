#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
//#define _GLIBCXX_DEBUG
using namespace std;
using Pi = pair<int, int>;
using vi = vector<int>;
using Graph = vector<vi>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int H, W, K;
  cin >> H >> W >> K;
  vector<string> S(H);
  Graph Sum(W, vector<int>(H));
  //入力パート
  REP(i, H) {
    cin >> S.at(i);
    int tmp = 0;
    //累積和パート（行ごと）
    REP(j, W) {
      if (S.at(i).at(j) == '1') tmp++;
      Sum.at(i).at(j) = tmp;
    }
  }
  //処理開始
  int ans = 99999;
  for (int bit = 0; bit < (1 << H - 1); bit++) {  //縦はbit全探索
    int slice = 0;
    int count = 0;  //これの最小が答え

    REP(i, H - 1) {
      if (bit & (1 << i)) {
        count++;
        REP(w, W) {
          for (int h = slice; h <= i; i++) {
          }
        }
        slice = i;
      }
    }
  }
}
