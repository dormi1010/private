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
  long double a, b, x;
  long double t, pie;
  pie = 2.0 * (long double)asin(1.0);
  cin >> a >> b >> x;
  if (a * a * b < 2 * x) {
    t = (long double)atan2(2 * b - ((2 * x) / (a * a)), a);
    t = t * 180.0 / pie;
  } else {
    t = (long double)atan2((2 * x) / (a * b), b);
    t = 90.0 - (t * 180.0 / pie);
  }
  cout << t << endl;
}