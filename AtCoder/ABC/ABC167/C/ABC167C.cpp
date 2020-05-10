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
  int N, M, X;
  cin >> N >> M >> X;
  Graph A(N);
  REP(i, N) {
    REP(j, M + 1) {
      int t;
      cin >> t;
      A.at(i).push_back(t);
    }
  }
  ll Ans = 1e15;
  for (int bit = 0; bit < (1 << N); ++bit) {
    vi skill(M);
    int sum = 0;
    bool flag = true;
    REP(i, N) {
      if (bit & (1 << i)) {
        sum += A.at(i).at(0);
        for (int k = 1; k < M + 1; k++) {
          skill.at(k - 1) += A.at(i).at(k);
        }
      }
    }
    for (auto a : skill) {
      if (a < X) flag = false;
    }
    if (flag && Ans > sum) Ans = sum;
  }
  if (Ans == 1e15)
    cout << -1 << endl;
  else
    cout << Ans << endl;
}