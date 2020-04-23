#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using Graph = vector<vector<int>>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll N, ans = 0;
  cin >> N;
  for (int i = 1; i <= N; i++)
    if (i % 3 != 0 && i % 5 != 0) ans += i;
  cout << ans << endl;
}