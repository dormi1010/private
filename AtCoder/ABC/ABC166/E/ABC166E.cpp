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
  ll ans = 0;
  set<ll> S;

  REP(i, N) {
    cin >> A.at(i);
    S.insert(A.at(i));
  }
  if (S.empty()) {
    cout << 0 << endl;
    return 0;
  }

  for (ll j = 0; j < N; j++) {
    auto itr = S.rbegin();
    while (itr != S.rend()) {
      if (*itr + A.at(j) + j >= N) {
        itr++;
        continue;
      } else if (A.at(j + A.at(j) + *itr) == *itr) {
        //        cout << j << " " << A.at(j) + *itr << endl;
        ans++;
        itr++;
      } else
        itr++;
    }
    //    if (A.at(j) + A.at(j + *itr) == *itr - j) ans++;
  }

  cout << ans << endl;
}