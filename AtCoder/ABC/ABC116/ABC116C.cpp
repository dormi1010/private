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
  int N, ans = 0;
  vi max, min;
  bool flag = true;  // true なら↑　falseなら↓
  cin >> N;
  vi h(N);
  REP(i, N) cin >> h.at(i);
  min.push_back(0);
  if (N == 1) {
    cout << h.at(0) << endl;
    return 0;
  }
  if (h.at(0) > h.at(1)) {
    max.push_back(h[0]);
    flag = false;
  } else {
    flag = true;
  }

  for (int i = 1; i < N - 1; i++) {
    if (h.at(i) < h.at(i + 1) && !flag) {
      min.push_back(h.at(i));
      flag = true;
    } else if (h.at(i) > h.at(i + 1) && flag) {
      max.push_back(h.at(i));
      flag = false;
    }
  }
  if (flag == true) max.push_back(h.at(N - 1));
  for (int j = 0; j < max.size(); j++) {
    ans += max.at(j) - min.at(j);
  }
  cout << ans << endl;
}