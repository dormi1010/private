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

vi divide(ll N) {
  vi ret(4);
  int a = 0, b = 0, c = 0;
  while (N % 2 == 0) {
    a++;
    N = N / 2;
  }
  while (N % 3 == 0) {
    b++;
    N = N / 3;
  }
  while (N % 5 == 0) {
    c++;
    N = N / 5;
  }
  ret[0] = a;
  ret[1] = b;
  ret[2] = c;
  ret[3] = N;

  return ret;
}

void solve() {
  ll N, A, B, C, D;
  cin >> N >> A >> B >> C >> D;
  vi div = divide(N);
  int a, b, c, d;
  a = div[0];
  b = div[1];
  c = div[2];
  d = div[3];
  cout << a << " " << b << " " << c << " " << d;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int T;
  cin >> T;
  REP(i, T) solve();
}