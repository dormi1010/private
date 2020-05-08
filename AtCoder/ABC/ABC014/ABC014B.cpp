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

// bit演算に慣れる問題。bit全探索　組合せ全列挙　O(2^n) 今回はO(n)
// 参考: https://qiita.com/drken/items/7c6ff2aa4d8fce1c9361
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int n;
  ll X;
  cin >> n >> X;
  vi a(n);
  ll ans = 0;
  REP(i, n) cin >> a.at(i);
  REP(j, n) {
    if (X & (1 << j)) ans += a.at(j);
  }

  cout << ans << endl;
}