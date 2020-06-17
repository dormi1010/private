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
  int n;
  cin >> n;
  vi a(n);
  int p1 = n / 2, p0 = n - p1;
  int ap1 = 0, ap0 = 0, err = 0;
  REP(i, n) {
    cin >> a.at(i);
    if (a.at(i) % 2 == 0)
      ap0++;
    else
      ap1++;
  }
  if (ap1 != p1) {
    cout << -1 << endl;
    return;
  }

  REP(i, n) {
    if (i % 2 != a.at(i) % 2) {
      err++;
    }
  }

  cout << err / 2 << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int t;
  cin >> t;
  REP(i, t) solve();
}