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

vi C(26), Last(26, -1);
vector<vi> S(365, vi(26));
vi T(365);
vector<vi> table(365, vi(26));

void Query(ll ans, int day, int query) {
  ll sabun = 0;
  sabun += (S.at(day).at(query) - S.at(day).at(T.at(day)));
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int D;
  ll ans = 0;
  cin >> D;

  REP(i, 26) cin >> C.at(i);
  REP(i, D) REP(j, 26) cin >> S.at(i).at(j);

  REP(i, D) {
    int tmp;
    cin >> tmp;
    T.at(i) = tmp - 1;
  }

  for (int i = 0; i < D; i++) {
    REP(j, 26) {
      if (j == T.at(i)) {
        Last.at(j) = i;
        table.at(i).at(j) = 0;
      } else {
        table.at(i).at(j) = C.at(j) * (i - Last.at(j));
      }
    }
    // cout << count << endl;

    // cout << "T = " << T.at(i) << " S = " << S.at(i).at(T.at(i)) << endl;
    ans += S.at(i).at(T.at(i));
  }

  REP(i, D) {
    REP(j, 26) { ans -= table.at(i).at(j); }
  }

  cout << ans << endl;
}