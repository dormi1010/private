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
  Vl A(N);
  ll ans = 1;
  REP(i, N) {
    cin >> A.at(i);
    if (A.at(i) == 0) {
      cout << 0 << endl;
      return 0;
    }
  }
  REP(i, N) {
    if (ans > (1000000000000000000 / A.at(i))) {
      cout << -1 << endl;
      return 0;
    }
    ans = ans * A.at(i);
  }
  if (ans > 1000000000000000000) {
    cout << -1 << endl;
    return 0;
  }
  cout << ans << endl;
}