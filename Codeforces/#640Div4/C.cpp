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
  ll t, n, k;
  cin >> t;
  REP(i, t) {
    cin >> n >> k;
    if (k % (n - 1) == 0) {
      cout << (k / (n - 1)) * n - 1 << endl;
    } else {
      cout << (k / (n - 1)) * n + (k % (n - 1)) << endl;
    }
  }
  return 0;
}