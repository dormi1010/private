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
  ll MOD = 1e9 + 7;
  ll N, K;
  cin >> N >> K;
  ll ans = 0;
  for (ll i = K; i <= N + 1; i++) {
    ll min = ((i - 1) * i) / 2;
    ll max = ((2 * N - i + 1) * i) / 2;
    ans += max - min + 1;
    ans = ans % MOD;
  }
  cout << ans << endl;
}