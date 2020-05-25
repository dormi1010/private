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
  int n, m;
  cin >> n >> m;
  vector<string> S;
  REP(i, n) {
    string s;
    cin >> s;
    //    s = s + '1';
    S.push_back(s);
  }

  string F = S.at(0);
  vector<char> FLAG(m, '-1');
  bool flag1 = false, flag2 = false;
  int f1, f2;
  for (auto s : S) {
    if (F == s) continue;
    int cnt = 0;
    vi diff;
    vector<char> FIX(m);
    REP(i, m) {
      if (s.at(i) == F.at(i))
        continue;
      else {
        cnt++;
        diff.push_back(i);
      }
    }
    if (cnt > 2) {
      cout << -1 << endl;
      return;
    }
    if (cnt == 1) {
      int x = diff.at(0);
      if (FLAG.at(x) == '0' && s.at(x) != FIX.at(x)) {
        cout << -1 << endl;
        return;
      } else
        FLAG.at(x) = s.at(x);
    }

    if (cnt == 2) {
      int y = diff.at(0), z = diff.at(1);
      if (FLAG.at(y) != '-1' && FLAG.at(z) != '-1') {
        cout << -1 << endl;
        return;
      }
    }
  }

  REP(i, n - 1) {
    REP(j, n - 1) {
      if (S.at(i).at(j) == '0')
        continue;
      else if (S.at(i + 1).at(j) == '0' && S.at(i).at(j + 1) == '0') {
        cout << "NO" << endl;
        return;
      }
    }
  }
  cout << "YES" << endl;
  return;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int t;
  cin >> t;
  REP(i, t) solve();
  return 0;
}