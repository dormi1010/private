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
  int n;
  cin >> n;
  vector<string> S;
  REP(i, n) {
    string s;
    cin >> s;
    //    s = s + '1';
    S.push_back(s);
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