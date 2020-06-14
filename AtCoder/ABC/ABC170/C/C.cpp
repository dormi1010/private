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
  /*body*/
  int X, N;
  cin >> X >> N;
  set<int> P;
  REP(i, N) {
    int in;
    cin >> in;
    P.insert(in);
  }
  if (P.empty()) {
    cout << X << endl;
    return 0;
  }
  int MX, mn, abp, abm;
  for (int i = X; i < X + 100; i++) {
    if (!P.count(i)) {
      MX = i;
      abp = i - X;
      break;
    }
  }
  for (int i = X; i > X - 100; i--) {
    if (!P.count(i)) {
      mn = i;
      abm = X - i;
      break;
    }
  }
  if (abp < abm) {
    cout << MX << endl;
  } else
    cout << mn << endl;
}