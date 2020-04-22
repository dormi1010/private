#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vecl = vector<ll>;
using Graph = vector<vector<int>>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  std::cout << std::fixed << std::setprecision(15);
  ll K, N;
  ll tmp = 0;
  long double ans = 0.00;
  cin >> N >> K;
  vector<ll> p(N + 1);
  REP(i, N) {
    int x;
    cin >> x;
    p.at(i + 1) = p.at(i) + (x + 1);
  }
  for (int j = K; j <= N; j++) {
    tmp = max(tmp, p.at(j) - p.at(j - K));
  }
  ans = tmp / 2.00;
  cout << ans << endl;
}