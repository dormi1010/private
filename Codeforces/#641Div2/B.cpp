#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
//#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using vi = vector<int>;
using Graph = vector<Vl>;
int p = 0;
Vl dp(p);

ll search(ll v, const Graph G) {
  for (int i = 1; i < G.at(v).size(); i++) {
    ll tmp = search(G.at(v).at(i), G);
    dp.at(v) = max(dp.at(v), tmp + 1);
  }
  return dp.at(v);
}

void solve() {
  int n;
  cin >> n;
  Graph s(n, Vl(1));
  dp.resize(0);
  dp.resize(n, 1);
  REP(i, n) cin >> s.at(i).at(0);
  REP(j, n - 1) {
    for (int k = j + 1; k < n; k++) {
      if (s.at(k).at(0) % s.at(j).at(0) == 0) s.at(j).push_back(k);
    }
  }
  ll ans = 0;
  REP(i, n) ans = max(ans, search(i, s));
  cout << ans << "\n";
  //
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