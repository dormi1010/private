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
  ll X;
  cin >> X;
  REP(i, 1e3) {
    for (ll j = -1e3; j <= 1e3; j++) {
      if (pow(i, 5) - pow(j, 5) == X) {
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }
  cout << "Not found" << endl;
  return -1;
}