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

vi C(26), Last(26, -1), T(365);
vector<vi> S(365, vi(26));
vector<vi> table(365, vi(26));
ll ans = 0;
int D, M;

void Query(int d, int q) {
  int prev;
  prev = T.at(d);
  T.at(d) = q;
  ll sabun = 0;
  sabun += (S.at(d).at(q) - S.at(d).at(prev));

  sabun += table.at(d).at(q);
  table.at(d).at(q) = 0;
  for (int i = d + 1; i < D && table.at(i).at(q) != 0; i++) {
    sabun += table.at(i).at(q);
    table.at(i).at(q) = table.at(i - 1).at(q) + C.at(q);
    sabun -= table.at(i).at(q);
  }
  /*
  cout << "table " << q << ": ";
  REP(i, D) cout << table.at(i).at(q) << " ";
  cout << "\n";
  */

  table.at(d).at(prev) =
      (d == 0) ? C.at(prev) : table.at(d - 1).at(prev) + C.at(prev);
  sabun -= table.at(d).at(prev);
  for (int j = d + 1; j < D && table.at(j).at(prev) != 0; j++) {
    sabun += table.at(j).at(prev);
    table.at(j).at(prev) = table.at(j - 1).at(prev) + C.at(prev);
    sabun -= table.at(j).at(prev);
  }
  /*
  cout << "table " << prev << ": ";
  REP(i, D) cout << table.at(i).at(prev) << " ";
  cout << "\n";
  cout << "sabun = " << sabun << endl;
*/
  ans += sabun;
  // cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"

  random_device rnd;
  mt19937 mt((int)time(0));
  uniform_int_distribution<> rand365(0, 364);
  uniform_int_distribution<> rand26(0, 25);

  cin >> D;
  REP(i, 26) cin >> C.at(i);
  REP(i, D) REP(j, 26) cin >> S.at(i).at(j);

  REP(i, D) { T.at(i) = i % 26; }

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
  /*
    REP(i, 26) {
      cout << "table " << i << ": ";
      REP(j, D) cout << table.at(j).at(i) << " ";
      cout << "\n";
    }
    cout << ans << endl;
  */

  // Query
  REP(i, 100000) {
    ll pans = ans;
    vector<vi> oldtable = table;
    int d = rand365(mt), q = rand26(mt);
    // cout << d << " " << q << endl;
    int oq = T.at(d);
    Query(d, q);
    if (ans < pans) {
      ans = pans;
      T.at(d) = oq;
      table = oldtable;
    }
  }

  REP(i, D) cout << T.at(i) + 1 << endl;
  /*
std::random_device rnd;  // 非決定的な乱数生成器を生成
std::mt19937 mt(
    rnd());  //  メルセンヌ・ツイスタの32ビット版、引数は初期シード値
std::uniform_int_distribution<> rand100(0, 99);  // [0, 99] 範囲の一様乱数
for (int i = 0; i < 20; ++i) {
  std::cout << rand100(mt) << "\n";
}*/
}
