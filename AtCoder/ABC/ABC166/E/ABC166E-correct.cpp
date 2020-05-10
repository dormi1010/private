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
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  ll N;
  map<ll, ll> L, R;
  cin >> N;
  REP(i, N) {
    ll tmp;
    cin >> tmp;
    if (L.count(i + tmp)) {
      L.at(i + tmp)++;
    } else {
      L[i + tmp] = 1;
    }
    if (R.count(i - tmp)) {
      R.at(i - tmp)++;
    } else {
      R[i - tmp] = 1;
    }
  }
  ll ans = 0;
  for (auto a : L) {
    if (R.count(a.first)) {
      ans += (a.second * R.at(a.first));
    }
  }

  cout << ans << endl;
}