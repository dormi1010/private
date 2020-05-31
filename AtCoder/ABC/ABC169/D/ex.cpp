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

map<ll, int> prime_factor(ll n) {
  map<ll, int> ret;
  for (ll i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if (n != 1) ret[n] = 1;
  return ret;
}

int main() {
  ll N;
  cin >> N;
  int ans = 0;
  map<ll, int> X = prime_factor(N);
  for (auto p : X) {
    int time = 1;
    // cout << p.first << " " << p.second << endl;
    while (p.second - time >= 0) {
      p.second -= time;
      time++;
      ans++;
    }
    // cout << ans << endl;
  }
  cout << ans << endl;
}