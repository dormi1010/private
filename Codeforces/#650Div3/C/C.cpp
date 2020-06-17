#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (int)n; i++)
//#define _GLIBCXX_DEBUG
using namespace std;
using Pi = pair<int, int>;
using vi = vector<int>;
using Graph = vector<vi>;
void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  REP(i, n) {
    if (s.at(i) == '1') {
      int l = max(0, i - k);
      int r = min(n - 1, i + k);
      for (int j = l; j <= r; j++) s.at(j) = '9';
    }
  }
  // cout << s << endl;
  int ans = 0;
  int count = 0;
  REP(i, n) {
    if (s.at(i) == '0') {
      count++;
    } else {
      ans += (count + (k)) / (k + 1);
      //    cout << count << " " << ans << endl;

      count = 0;
    }
  }
  ans += (count + (k)) / (k + 1);
  cout << ans << endl;
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