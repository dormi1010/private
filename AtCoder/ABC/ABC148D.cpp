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
  ll N;
  Vecl a;
  cin >> N;
  ll tmp;
  REP(i, N) {
    cin >> tmp;
    a.push_back(tmp);
  }
  tmp = 1;
  ll ans = 0;
  for (auto x : a) {
    if (x != tmp)
      ans++;
    else
      tmp++;
  }
  if (ans == N)
    cout << -1 << endl;
  else
    cout << ans << endl;
}