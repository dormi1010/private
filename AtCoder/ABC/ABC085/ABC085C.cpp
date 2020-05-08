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
  ll N, Y;
  cin >> N >> Y;
  Y = Y / 1000;
  int C = Y - N;
  for (int i = 0; i <= min(N, Y / 10); i++) {
    int y = Y - (10 * i);
    int n = N - i;  // x + 5z=y : x+z=n : z = (y-n)/4
    int c = y - n;
    if (c < 0) continue;
    if (c % 4 == 0) {
      if (i + (c / 4) > N) continue;
      cout << i << " " << c / 4 << " " << N - i - (c / 4) << endl;
      return 0;
    }
  }
  cout << -1 << " " << -1 << " " << -1 << endl;
  return 0;
}