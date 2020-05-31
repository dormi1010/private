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
  int N;
  cin >> N;

  Vl A(N), B(N);
  REP(i, N) cin >> A.at(i) >> B.at(i);
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  int m, M;
  if (N % 2 == 1) {
    m = A.at(N / 2);
    M = B.at(N / 2);
  } else {
    m = (A.at(N / 2 - 1) + A.at(N / 2));
    M = (B.at(N / 2 - 1) + B.at(N / 2));
  }
  cout << M - m + 1 << endl;
}