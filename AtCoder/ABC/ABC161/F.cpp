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

Vl divisor(ll N) {
  Vl div;
  for (ll i = 2; i * i <= N; i++) {
    if (N % i == 0) {
      div.push_back(i);
      if (i * i != N) div.push_back(N / i);
    }
  }
  return div;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll N;
  cin >> N;
  Vl div1 = divisor(N);
  Vl div2 = divisor(N - 1);
  // div1.insert(div1.end(), div2.begin(), div2.end());
  // sort(div1.begin(),div1.end());
  // div1.erase(unique(div1.begin(), div1.end()), div1.end());

  ll ans = 0;
  if (N > 2) ans++;

  for (auto a : div1) {
    ll tmp = N;
    while (tmp % a == 0) {
      tmp = tmp / a;
    }

    if (tmp % a == 1) ans++;
  }
  for (auto b : div2) {
    ans++;
  }
  cout << ans + 1 << endl;
}