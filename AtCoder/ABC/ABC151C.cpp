#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll A, B;
  cin >> A >> B;
  vector<vector<ll>> pi(A, vector<ll>(2, 0));
  ll pena = 0, ans = 0;
  int x;
  string s;
  REP(i, B) {
    cin >> x >> s;
    if (pi[x - 1][0] == false && s == "WA") {
      pi[x - 1][1]++;
    } else if (pi[x - 1][0] == false && s == "AC") {
      ans++;
      pi[x - 1][0] = true;
    } else
      continue;
  }

  REP(j, A) {
    if (pi[j][0] == true) pena += pi[j][1];
  }
  printf("%lld %lld\n", ans, pena);
  return 0;
}