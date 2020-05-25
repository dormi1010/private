#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using vi = vector<int>;
using Graph = vector<vi>;

const int MAX_N = 1100;
const int MAX_H = 10100;

int dp[MAX_N][MAX_H];

int main() {
  // cin.tie(0);
  // ios::sync_with_stdio(false);
  int H, N;
  cin >> H >> N;
  int A[N], B[N];
  REP(i, N) cin >> A[i] >> B[i];
  REP(i, MAX_N) REP(j, MAX_H) dp[i][j] = 1 << 29;
  REP(i, N + 1) dp[i][0] = 0;

  REP(i, N) {
    REP(d, H + 1) {
      dp[i + 1][d] = min(dp[i + 1][max(0, d - A[i])] + B[i], dp[i][d]);
      // cout << dp[i + 1][d] << " ";
    }
    // cout << '\n';
  }
  cout << dp[N][H] << endl;
}