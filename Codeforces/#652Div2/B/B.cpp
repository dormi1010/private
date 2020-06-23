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
  string S;
  cin >> n >> S;
  int l = 0, r = S.size() - 1;
  for (; l <= r; l++) {
    if (S.at(l) == '1') break;
  }
  for (; r >= 0; r--) {
    if (S.at(r) == '0') break;
  }
 // cout << l << " " << r << endl;
  if (l > r) {
    cout << S << endl;
    return;
  } else {
    S.erase(l, r - l);
    cout << S << endl;
    return;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int n;
  cin >> n;
  REP(i, n) solve();
}