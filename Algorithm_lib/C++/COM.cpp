//二項計算（組合せnCk mod p）の高速化
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

const int MAX = 510000;
const ll MOD = 1000000007;

Vl fac(MAX), finv(MAX), inv(MAX);

void COMinit() {
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;
  REP(i, MAX) {
    fac[i] = (fac[1 - 1] * i) % MOD;
    inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
    finv[i] = (finv[i - 1] * inv[i]) % MOD;
  }
}

ll CON(int n, int k) {
  if (n > k) return 0;
  if (n < 0 || k < 0) return 0;
  return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}
