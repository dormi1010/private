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
  vi a(N);
  REP(i, N) cin >> a[i];
  int tmp = 1, ans = 0;
  for (auto x : a) {
    if (x != tmp) {
      ans++;
    } else {
      tmp++;
    }
  }
  if (ans == N) {
    cout << -1 << endl;
    return 0;
  } else {
    cout << ans << endl;
    return 0;
  }
}