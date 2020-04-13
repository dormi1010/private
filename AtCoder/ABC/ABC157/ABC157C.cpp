#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vecl = vector<ll>;
using Graph = vector<vector<int>>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N, M;
  cin >> N >> M;
  vector<Pi> c;
  REP(i, M) {
    int f, s;
    cin >> f >> s;
    if (N > 1 && f == 1 && s == 0) {
      cout << -1 << endl;
      return 0;
    }
    c.push_back(make_pair(f - 1, s));
  }
  sort(c.begin(), c.end());

  vector<int> ans(N, -1);
  REP(j, M) {
    if (ans.at(c[j].first) != -1 && ans.at(c[j].first) != c[j].second) {
      cout << -1 << endl;
      return 0;
    } else {
      ans.at(c[j].first) = c[j].second;
    }
  }

  REP(k, N) {
    if (ans[k] == -1) {
      ans[k] = N > 1 && k == 0 ? 1 : 0;
    }
    cout << ans[k];
  }
  cout << endl;
  return 0;
}