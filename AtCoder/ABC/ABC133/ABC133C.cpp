#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
//#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vecl = vector<ll>;
using Graph = vector<vector<int>>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll L, R;
  cin >> L >> R;
  if (R - L >= 2019 || L == 0) {
    cout << 0 << endl;
    return 0;
  }
  L = L % 2019;
  R = R % 2019;
  if (L > R) {
    cout << 0 << endl;
    return 0;
  }
  int ans = 2019;
  for (int i = L; i < R; i++) {
    for (int j = i + 1; j <= R; j++) {
      ans = min(ans, (i * j) % 2019);
      if (ans == 0) {
        cout << 0 << endl;
        return 0;
      }
    }
  }
  cout << ans << endl;

  return 0;
}