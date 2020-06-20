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
  ll N;
  cin >> N;
  Vl A(N);
  REP(i, N) cin >> A.at(i);
  ll dp[N + 1][10001] = {{0}};
  dp[0][0] = 1;
  for (int i = 1; i <= N; i++) {
    REP(j, 10001) {
      if (A.at(i - 1) > j)
        dp[i][j] = dp[i - 1][j];
      else
        dp[i][j] = max(dp[i - 1][j - A.at(i - 1)], dp[i - 1][j]);
    }
    /*
    REP(k, 11) cout << dp[i][k] << " ";
    cout << "\n";
    */
  }
  int ans = 0;
  REP(i, 10001) if (dp[N][i] == 1) ans++;
  cout << ans << endl;
}