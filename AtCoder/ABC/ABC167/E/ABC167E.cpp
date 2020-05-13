#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using vi = vector<int>;
using Graph = vector<vi>;

const int MAX = 510000;
const ll MOD = 998244353;

ll fac[MAX], finv[MAX], inv[MAX];

void COMinit() {
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;
  for (int i = 2; i < MAX; i++) {
    fac[i] = fac[i - 1] * i % MOD;
    inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
    finv[i] = (finv[i - 1] * inv[i]) % MOD;
  }
}

ll COM(int n, int k) {
  if (n < k) return 0;
  if (n < 0 || k < 0) return 0;
  return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

ll modpow(ll n, ll t) {
  ll ret = 1;
  while (0 < t) {
    if (t % 2 == 0) {
      n *= n;
      n %= MOD;
      t >>= 1;
    } else {
      ret *= n;
      ret %= MOD;
      --t;
    }
  }
  return ret;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int N, M, K;
  cin >> N >> M >> K;
  ll ans = 0;
  COMinit();

  REP(i, K + 1) {
    ll tmp = (COM(N - 1, i) * M % MOD) * modpow((M - 1), N - i - 1) % MOD;
    // cout << COM(N - 1, i) << " " << modpow((M - 1), N - i - 1) << endl;
    //    cout << ans << endl;
    ans = (ans + tmp) % MOD;
  }
  cout << ans << endl;
}