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

void solve() {
  int n, k;
  cin >> n >> k;
  int table[n][n] = {};
  for (int j = 0; j < n && k >= 0; j++) {
    if (k == 0) {
      cout << 0 << endl;
      REP(l, n) {
        REP(m, n) { cout << table[l][m]; }
        cout << "\n";
      }
      return;
    }
    for (int i = 0; i < n && k >= 0; i++) {
      if (k == 0) {
        cout << 2 << endl;
        REP(l, n) {
          REP(m, n) { cout << table[l][m]; }
          cout << "\n";
        }
        return;
      }
      int x = (i + 2 * j) % n;
      if (table[i][x] == 1) {
        x = (x + 1) % n;
      }
      k--;

      table[i][x] = 1;
    }
    if (k == 0) {
      cout << 0 << endl;
      REP(l, n) {
        REP(m, n) {
          //         cout << "(i,j) = (" << l << "," << m << ")" << endl;
          cout << table[l][m];
        }
        cout << "\n";
      }
      return;
    }
  }
}

int main() {
  // cin.tie(0);
  // ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int n;
  cin >> n;
  REP(i, n) solve();
}