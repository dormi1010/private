#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
//#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using vi = vector<int>;
using Graph = vector<vi>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int H, W, K, black = 0, ans = 0;
  cin >> H >> W >> K;
  vector<vi> table(H, vi(W));
  vi yoko(H), tate(W);

  REP(i, H) {
    REP(j, W) {
      char c;
      cin >> c;
      if (c == '#') {
        table[i][j] = 1;
        black++;
        yoko[i]++;
        tate[j]++;
      }
    }
  }
  /*
    REP(i, H) {
      REP(j, W) { cout << table[i][j]; }
      cout << "\n";
    }
  */
  for (int bit = 0; bit < (1 << H); ++bit) {
    int red = 0;
    vi flag(6, 0);
    REP(i, H) {
      if (bit & (1 << i)) {
        red += yoko.at(i);
        flag.at(i) = 1;
      }
    }
    if (black - red < K)
      continue;
    else {
      for (int bit2 = 0; bit2 < (1 << W); ++bit2) {
        int red2 = 0;
        REP(j, W) {
          if (bit2 & (1 << j)) {
            REP(k, H) {
              // cout << table[k][j] << endl;
              if (flag.at(k)) {
                // cout << k << " = flag " << endl;
                continue;
              } else if (table[k][j])
                red2++;
            }
          }
        }
        // cout << "i = " << bit << " j = " << bit2 << endl;
        // cout << black << " " << red << " " << red2 << endl;
        if (black - red - red2 != K)
          continue;
        else
          ans++;
      }
    }
  }
  cout << ans << endl;
}
/*
for (int bit = 0; bit < (1 << N); ++bit) {
  vi skill(M);
  int sum = 0;
  bool flag = true;
  REP(i, N) {
    if (bit & (1 << i)) {
      sum += A.at(i).at(0);
      for (int k = 1; k < M + 1; k++) {
        skill.at(k - 1) += A.at(i).at(k);
      }
    }
  }
  for (auto a : skill) {
    if (a < X) flag = false;
  }
  if (flag && Ans > sum) Ans = sum;
}*/