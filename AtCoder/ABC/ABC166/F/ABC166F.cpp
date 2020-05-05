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
  ll N, A, B, C;
  cin >> N >> A >> B >> C;
  vector<string> S(N);
  REP(i, N)
  cin >> S.at(i);
  REP(j, N) {
    ll m, n;
    if (S.at(j) == "AB") {
      m = &A;
      n = &B;
    } else if (S.at(j) == "BC") {
      m = &B;
      n = &C;
    } else {
      m = &A;
      n = &C;
    }
    if (m == 0 && n == 0) {
      cout << "No" << endl;
      return 0;
    } else if (A + B + C == 1 && m == 1 && n == 0) {
      m--;
      n++;
      continue;
    } else if (A + B + C == 1 && m == 0 && n == 1) {
      m++;
      n--;
      continue;
    } else if (j + 1 == N || m != 0 && m != 0)
  }
}
