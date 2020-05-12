#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll A, K;
  cin >> A >> K;
  ll ans = 0;
  if (K == 0)
    cout << 2000000000000 - A << endl;
  else {
    while (A < 2000000000000) {
      A += (K * A);
      A++;
      ans++;
    }
    cout << ans << endl;
  }
}