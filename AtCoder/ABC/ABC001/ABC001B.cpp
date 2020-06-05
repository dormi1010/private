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
  int m;
  cin >> m;
  if (m < 100) {
    cout << "00" << endl;
  } else if (m < 1000) {
    cout << 0 << m / 100 << endl;
  } else if (m <= 5000) {
    cout << m / 100 << endl;
  } else if (m <= 30000) {
    cout << m / 1000 + 50 << endl;
  } else if (m <= 70000) {
    cout << (m / 1000 - 30) / 5 + 80 << endl;
  } else {
    cout << 89 << endl;
  }
}