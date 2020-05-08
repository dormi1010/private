#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vecl = vector<ll>;
using Graph = vector<vector<int>>;
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string S;
  int N;
  cin >> N >> S;
  ll ans = 0;
  int r = 0, g = 0, b = 0;
  vector<vector<int>> vec(N, vector<int>(3, 0));
  for (int i = 0; i < N; i++) {
    if (S.at(i) == 'R')
      r++;
    else if (S.at(i) == 'G')
      g++;
    else
      b++;
    vec.at(i).at(0) = r;
    vec.at(i).at(1) = g;
    vec.at(i).at(2) = b;
  }
  int cha;
  char c;
  for (int i = 0; i < N - 2; i++) {
    char T = S.at(i);
    for (int j = i + 1; j < N - 1; j++) {
      char T2 = S.at(j);
      if (T == T2) continue;
      if (T != 'R' && T2 != 'R') {
        cha = 0;
        c = 'R';
      } else if (T != 'G' && T2 != 'G') {
        cha = 1;
        c = 'G';
      } else if (T != 'B' && T2 != 'B') {
        cha = 2;
        c = 'B';
      }
      ans += vec.at(N - 1).at(cha) - vec.at(j).at(cha);
      if (j + j - i < N) {
        if (S.at(j + (j - i)) == c) ans--;
      }
    }
  }
  // for (int x = 0; x < 3; x++) cout << vec[N - 1][x] << " " << endl;
  std::cout << ans << endl;
}