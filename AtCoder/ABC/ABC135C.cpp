#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll N;
  cin >> N;
  vector<ll> A(N + 1);
  vector<ll> B(N + 1);
  REP(i, N + 1)
  cin >> A.at(i);
  REP(j, N)
  cin >> B.at(j);
  ll ans = 0;
  REP(k, N) {
    ans += min(A[k], B[k]);
    ll tmp = B[k] - A[k];
    if (tmp > 0) {
      ans += min(A[k + 1], tmp);
      A[k + 1] -= tmp;
      if (A[k + 1] < 0) A[k + 1] = 0;
    } else
      continue;
  }

  ans += min(A[N], B[N]);
  cout << ans << endl;
}