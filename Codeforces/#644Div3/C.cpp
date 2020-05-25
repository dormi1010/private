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
  vi s(n);
  int sa = 0, even = 0, odd = 0;
  REP(i, n) {
    cin >> s.at(i);
    if (s.at(i) % 2 == 0)
      even++;
    else
      odd++;
  }
  sort(s.begin(), s.end());

  for (int j = 1; j < n; j++) {
    if (s.at(j) - s.at(j - 1) == 1) sa++;
  }
  if (even % 2 == 1 && odd % 2 == 1 && sa == 0 || even % 2 != odd % 2)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
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