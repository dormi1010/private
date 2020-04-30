#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
// define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using vi = vector<int>;
using Graph = vector<vi>;

set<ll> diviser(ll n) {
  set<ll> ret;
  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      ret.insert(i);
      if (i * i != n) ret.insert(n / i);
    }
  }
  return ret;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  ll N, X;
  cin >> N >> X;
  Vl x;
  REP(i, N) {
    ll tmp;
    cin >> tmp;
    x.push_back(abs(tmp - X));
  }

  set<ll> D = diviser(x.at(0));
  set<ll> Dcopy = D;
  for (auto m : x) {
    for (auto a : Dcopy) {
      if (m % a != 0) D.erase(a);
    }
  }

  cout << *rbegin(D) << endl;

  return 0;
}