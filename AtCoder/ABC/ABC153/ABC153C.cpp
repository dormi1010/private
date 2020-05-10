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
  int N, K;
  cin >> N >> K;
  Vl H(N);
  REP(i, N) cin >> H.at(i);
  sort(H.begin(), H.end(), greater<ll>());
  REP(j, min(K, N)) H.at(j) = 0;
  ll ans = 0;
  for (auto a : H) ans += a;
  cout << ans << endl;
}