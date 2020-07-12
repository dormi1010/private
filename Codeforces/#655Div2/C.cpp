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
  int n, ans = 0;
  cin >> n;
  vi A(n);
  REP(i, n) { cin >> A.at(i); }
  vi B = A;
  sort(B.begin(), B.end());
  bool flag = false;
  REP(i, n) {
    if (B.at(i) != A.at(i)) {
      while (i < n - 1) {
        i++;
        if (B.at(i) == A.at(i))
          flag = true;
        else if (flag && B.at(i) != A.at(i)) {
          cout << 2 << endl;
          return;
        }
      }
      cout << 1 << endl;
      return;
    }
  }
  cout << 0 << endl;
  return;
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