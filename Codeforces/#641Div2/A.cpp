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

ll func(ll n) {
  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) return i;
  }
  return n;
}
void solve() {
  ll n, k;
  cin >> n >> k;
  REP(i, k) {
    if (n % 2 == 0) {
      n += 2 * (k - i);
      break;
    } else
      n += func(n);
  }
  cout << n << "\n";
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