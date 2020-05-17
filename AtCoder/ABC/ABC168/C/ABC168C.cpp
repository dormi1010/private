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
  std::cout << std::fixed << std::setprecision(15);  //"for float-base
  // problem"
  int A, B, H, M;
  long double pie = 2.0 * (long double)asin(1.0);
  cin >> A >> B >> H >> M;
  double L = 6.0 * M;
  double S = H * 30.0 + (M / 2.0);
  double sa = min((double)abs(S - L * 1.0), 360 - (double)abs(S - L * 1.0));
  double yogen = A * A + B * B - 2 * A * B * (double)cos(sa * pie / 180.0);
  // cout << sa << "" << cos(sa) << " " << yogen << endl;
  cout << (double)sqrt(yogen) << endl;
}