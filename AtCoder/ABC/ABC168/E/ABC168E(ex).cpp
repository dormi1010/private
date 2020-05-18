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

const ll MOD = 1000000007;

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
  ll N;
  cin >> N;
  ll zero = 0;
  map<pair<ll, ll>, ll> mp;
  ll ans = 1;
  REP(i, N) {
    ll A, B;
    cin >> A >> B;
    if (A == 0 && B == 0) {
      zero++;
      continue;
    } else if (A == 0 || B == 0) {
      A = (B == 0) ? 1 : 0;
      B = (A == 0) ? 1 : 0;
    } else if (B > 0) {
      ll G = gcd(A, B);
      A = A / G;
      B = B / G;
    } else if (B < 0) {
      ll G = gcd(A, B);
      A = -1 * (A / G);
      B = -1 * (B / G);
    }
    if (mp.count({A, B}))
      mp.at({A, B})++;
    else
      mp[{A, B}] = 1;
  }

  ll adhoc = 0;
  for (auto a : mp) {
    ll A = a.first.first;
    ll B = a.first.second;
    ll X, Y;
    X = a.second;  //{A,B}の個数
    if (A < 0) {
      if (mp.count({B, -A}))
        Y = mp.at({B, -A}), mp.erase({B, -A});
      else {
        Y = 0;
      }
    } else if (B == 0) {
      if (mp.count({0, 1}))
        Y = mp.at({0, 1}), mp.erase({0, 1});
      else {
        Y = 0;
      }
    } else if (A == 0) {
      if (mp.count({1, 0}))
        Y = mp.at({1, 0}), mp.erase({1, 0});
      else {
        Y = 0;
      }
    } else {
      if (mp.count({-B, A}))
        Y = mp.at({-B, A}), mp.erase({-B, A});
      else {
        Y = 0;
      }
    }

    ans = (ans * (modpow(2, X) + modpow(2, Y) - 1)) % MOD;
    // cout << A << " " << B << " " << X << " " << Y << " " << ans << endl;
    //    debugB
  }
  ans = (ans + zero - 1 + MOD) % MOD;
  cout << ans << endl;
}