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

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int t;
  cin >> t;
  int n;
  int ans = 0, tmp = 0;
  REP(i, t) {
    ans = 0;
    cin >> n;
    vi a(n);
    vector<bool> flag(n + 1);
    REP(i, n) cin >> a.at(i);
    for (int j = 0; j < n - 1; j++) {
      tmp = a.at(j);
      for (int k = j + 1; k < n; k++) {
        tmp += a.at(k);
        if (tmp <= n && !flag.at(tmp)) flag.at(tmp) = true;
      }
    }
    for (auto x : a) {
      if (flag.at(x)) ans++;
    }
    //   for (auto m : nums) cout << m << " ";
    cout << ans << "\n";
  }
  return 0;
}