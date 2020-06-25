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

void solve() {
  int N;
  cin >> N;
  Vl A(N);
  ll even = 0;
  REP(i, N) {
    cin >> A.at(i);
    if (i % 2 == 0) even += A.at(i);
  }
  if (N == 1) {
    cout << even << endl;
    return;
  } else if (N == 2) {
    cout << max(A.at(0), A.at(1)) << endl;
    return;
  }

  Vl dp1(N / 2), dp2(N / 2);

  dp1[0] = max((ll)0, A.at(1) - A.at(0));
  dp2[0] = max((ll)0, A.at(1) - A.at(2));
  ll max1 = dp1[0], max2 = dp2[0];
  for (int i = 1; i * 2 + 1 < N; i++) {
    dp1[i] = max((ll)0, dp1[i - 1] + (A.at(2 * i + 1) - A.at(2 * i)));
    if (dp1[i] > max1) max1 = dp1[i];
  }
  for (int i = 1; (i + 1) * 2 < N; i++) {
    dp2[i] = max((ll)0, dp2[i - 1] + (A.at(2 * i + 1) - A.at(2 * i + 2)));
    if (dp2[i] > max2) max2 = dp2[i];
  }
  /*
  cout << "dp1:";
  for (auto a : dp1) cout << a << " ";
  cout << "\n";
  cout << "dp2:";
  for (auto b : dp2) cout << b << " ";
  cout << "\n";
  */
  even += max(max1, max2);
  cout << even << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int n;
  cin >> n;
  REP(i, n) solve();
}