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
  int K, N;
  cin >> N >> K;
  vi p(N);
  REP(i, N) cin >> p.at(i);
  sort(p.begin(), p.end());
  int ans = 0;
  REP(i, K) ans += p.at(i);
  cout << ans << endl;
}