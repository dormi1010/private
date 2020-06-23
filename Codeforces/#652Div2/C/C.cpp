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
  ll n, k;
  ll ans = 0;
  ll p = 0;
  cin >> n >> k;
  Vl a(n), w;
  REP(i, n) cin >> a.at(i);
  sort(a.begin(), a.end());

  REP(i, k) {
    ll tmp;
    cin >> tmp;
    if (tmp == 1) {
      ans += a.back() * 2;
      a.pop_back();
    } else
      w.push_back(tmp);
  }

  if (w.empty()) {
    cout << ans << endl;
    return;
  }

  sort(w.begin(), w.end(), greater<int>());

  REP(i, w.size()) {
    ll m, M;
    ll num = w.at(i);

    M = a.back();
    a.pop_back();
    num--;
    m = a.at(p);
    p++;
    num--;
    while (num > 0) {
      p++;
      num--;
    }
    ans += m + M;
  }
  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int n;
  cin >> n;
  REP(i, n) solve();
}