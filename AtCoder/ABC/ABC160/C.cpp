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
  ll K, N;
  cin >> K >> N;
  int A[N];
  ll max = 0, ans = 0;
  REP(i, N) { cin >> A[i]; }
  REP(j, N - 1) {
    ll tmp = A[j + 1] - A[j];
    if (tmp > max) max = tmp;
    ans += tmp;
    //       cout << ans << endl;
  }

  ll tmp = A[0] + (K - A[N - 1]);
  ans += tmp;
  if (tmp > max) max = tmp;
  //    cout << ans << endl;

  ans -= max;
  cout << ans << endl;
}