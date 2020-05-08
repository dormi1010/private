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
  ll N;
  cin >> N;
  Vl H(N);
  ll tmp = 0, ans = 0;
  REP(i, N) cin >> H.at(i);
  for (ll j = 0; j < N - 1; j++) {
    if (H.at(j) >= H.at(j + 1))
      tmp++;
    else if (ans < tmp) {
      ans = tmp;
      tmp = 0;
    } else
      tmp = 0;
  }
  if (ans < tmp) ans = tmp;
  cout << ans << endl;
}