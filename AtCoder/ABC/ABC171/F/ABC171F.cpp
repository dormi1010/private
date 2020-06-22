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

const int MAX = 2001000;
const ll MOD = 1000000007;

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
  string S;
  ll K;
  cin >> K >> S;
  ll size = S.size();
  ll ans = 0;

  COMinit();

  REP(i, K + 1) {
    ll p = modpow(26, i);
    ll c = COM((size + K - 1 - i), (size - 1));
    ll p2 = modpow(25, (K - i));
    // cout << c << " " << p << " " << p2 << endl;
    ans += (((p * c) % MOD) * p2) % MOD;
    ans %= MOD;
  }

  cout << ans << endl;
}