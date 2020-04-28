#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
//#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vectosr<ll>;
using vi = vector<int>;
using Graph = vector<vi>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int N, min = 100, max = 0, ans = 0;

  bool flag = false;
  cin >> N;
  vi h(N);
  REP(i, N) {
    cin >> h.at(i);
    if (max < h.at(i)) max = h.at(i);
  }
  REP(i, N) {
    if (h.at(i) < h.at(i + 1) && !flag) {
      min = h.at(i);
      flag = true;
    } else if (h.at(i) > h.at(i + 1) && flag) {
      ans += max - min;
      flag = false;
    }
  }
}