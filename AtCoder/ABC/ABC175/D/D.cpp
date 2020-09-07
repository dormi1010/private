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
  int N, K;
  cin >> N >> K;
  vi P(N), C(N), D(N);
  REP(i, N) { cin >> P.at(i); }
  REP(j, N) { cin >> C.at(j); }
  ll total = 0, maxi = -1;
  REP(i, N) {
    D.at(i) = C.at(P.at(i) - 1);
    total += D.at(i);
    maxi = max(maxi, (ll)D.at(i));
  }
  REP(i, N) { D.push_back(D.at(i)); }

  if (maxi < 0) {
    cout << maxi << endl;
    return 0;
  }

  ll ans = 0;

  if (total > 0) {
    ans = total * ((K - 1) / N);
  }

  int T = K % N;
  if (T == 0) T = N;
  maxi = -1000000000;
  for (int i = 0; i < N; i++) {
    Vl DP(N);
    DP.at(0) = max(0, D.at(i));
    maxi = max(maxi, DP.at(0));
    for (int j = 1; j < T; j++) {
      DP.at(j) = max(0LL, DP.at(j - 1) + (ll)D.at(j + i));
      maxi = max(maxi, DP.at(j));
    }
    cout << maxi << " ";
  }

  cout << "\n" << ans << endl;
}