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
  ll n;
  int k;
  cin >> n >> k;
  if (n < k || n < 2 * k && n % 2 != k % 2 || k % 2 == 0 && n % 2 == 1) {
    cout << "NO" << endl;
    return;
  } else if (n < 2 * k || n % 2 == k % 2) {
    cout << "YES" << endl;
    REP(i, k - 1) cout << 1 << " ";
    cout << n - (k - 1) << endl;
  } else {
    cout << "YES" << endl;
    REP(i, k - 1) cout << 2 << " ";
    cout << n - 2 * (k - 1) << endl;
  }
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