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
  Vl A(N + 1);
  ll LMAX = 0;
  REP(i, N + 1) {
    cin >> A.at(i);
    LMAX += A.at(i);
  }
  ll ans = 0;

  ll now = 1;

  for (ll j = 0; j < N; j++) {
    ans += now;
    LMAX -= A.at(j);
    //    cout << now << " " << LMAX << endl;  // debug
    if (LMAX <= 0 || now - A.at(j) <= 0) {
      cout << -1 << endl;
      return 0;
    }
    now = min((now - A.at(j)) * 2, LMAX);
  }

  if (now != A.at(N)) {
    cout << -1 << endl;
    return 0;
  }
  ans += A.at(N);
  cout << ans << endl;

  return 0;
}