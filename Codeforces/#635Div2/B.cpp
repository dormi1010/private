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

void solve() {
  int x, m, n;
  cin >> x >> n >> m;
  REP(i, n) {
    if (x <= 10 * m) {
      cout << "YES" << endl;
      return;
    }
    x = (x / 2) + 10;
  }

  if (x <= 10 * m)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int t;
  cin >> t;
  REP(i, t) solve();
  return 0;
}