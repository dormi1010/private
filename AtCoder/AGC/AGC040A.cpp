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
  string S;
  cin >> S;
  if (S.at(S.size() - 1) == '<')
    S = S + '>';
  else
    S = S + '<';
  ll ans = 0, p = 0, m = 0, M = 0;
  char op = '>';
  for (int i = 0; i < S.size(); i++) {
    if (op == '>' && S.at(i) == '<') {
      ans += ((m * (m + 1)) / 2);
      ans -= min(M, m);
      M = 0;
      m = 1;
      op = '<';
      // cout << ans << endl;
    } else if (op == '<' && S.at(i) == '>') {
      ans += ((m * (m + 1)) / 2);
      M = m;
      m = 1;
      op = '>';
      // cout << ans << endl;
    } else if (op == S.at(i)) {
      m++;
    }
  }
  cout << ans << endl;
}