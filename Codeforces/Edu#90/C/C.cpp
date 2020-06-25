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
  string S;
  cin >> S;
  int m = 0;
  vi mins(1000010, -1);
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '+')
      m++;
    else
      m--;
    if (m < 0 && mins.at(m * -1) == -1) mins.at(m * -1) = i + 1;
  }

  ll ans = S.size();
  // cout << ans << endl;
  int p = 1;
  while (mins.at(p) != -1) {
    ans += mins.at(p);
    p++;
    // cout << ans << endl;
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