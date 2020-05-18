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
  cin >> N;
  Vl P(N);
  REP(i, N) cin >> P.at(i);
  int ans = 0;
  int MIN = 9999999;
  for (auto a : P) {
    if (a > MIN)
      continue;
    else {
      ans++;
      MIN = a;
    }
  }

  cout << ans << endl;
}