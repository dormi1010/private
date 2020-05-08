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
  std::cout << std::fixed << std::setprecision(15);
  int n, m;
  cin >> n >> m;
  if (n >= 12) n -= 12;
  double L = 6.0 * m;
  double S = n * 30.0 + (m / 2.0);
  double sa = (double)abs(S - L * 1.0);
  cout << min(sa, 360 - sa) << endl;
  return 0;
}