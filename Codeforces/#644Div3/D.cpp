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

vector<int> divisor(int n) {
  vector<int> ret;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ret.push_back(i);
      if (i * i != n) ret.push_back(n / i);
    }
  }
  sort(begin(ret), end(ret), greater<int>());
  return (ret);
}

void solve() {
  int n, k;
  cin >> n >> k;
  if (n <= k) {
    cout << 1 << endl;
    return;
  }
  vi div = divisor(n);
  for (auto a : div) {
    if (a <= k) {
      cout << n / a << endl;
      return;
    }
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