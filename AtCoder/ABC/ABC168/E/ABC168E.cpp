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

const ll MOD = 1e9 + 7;

// ll gcd(ll a, ll b) { return b != 0 ? gcd(b, a % b) : a; }
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
  ll N;
  cin >> N;
  ll zero = 0;
  map<pair<ll, ll>, ll> mp;
  ll ans = 1;
  REP(i, N) {
    ll A, B;
    cin >> A >> B;
    ll a, b;
    if (A == 0 && B == 0) {
      zero++;
      continue;
    } else if (A == 0 || B == 0) {
      a = (B == 0) ? 1 : 0;
      b = (A == 0) ? 1 : 0;
      //    } else if (B > 0) {
      //      A = A / gcd(A, B);
      //      B = B / gcd(A, B);
    } else {
      a = A / __gcd(A, B);
      b = B / __gcd(A, B);
    }
    // cout << a << " " << b << endl;  // debug
    if (mp.count({a, b}))
      mp.at({a, b})++;
    else
      mp[{a, b}] = 1;
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
        adhoc++;
        continue;
      }
    } else if (B == 0) {
      if (mp.count({0, 1}))
        Y = mp.at({0, 1}), mp.erase({0, 1});
      else {
        adhoc++;
        continue;
      }
    } else {
      if (mp.count({-B, A}))
        Y = mp.at({-B, A}), mp.erase({-B, A});
      else {
        adhoc++;
        continue;
      }
    }

    ans = (ans * (modpow(2, X) + modpow(2, Y) - 1)) % MOD;
    cout << A << " " << B << " " << X << " " << Y << " " << ans << endl;
    //    debug
  }
  ans = (ans * modpow(2, adhoc)) % MOD;
  ans += zero;
  cout << ans - 1 << endl;
}