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
  ll ans = 0, count = 0;
  vi A(N);
  REP(i, N) cin >> A[i];

  sort(A.begin(), A.end(), greater());
  ans += A.at(0);
  count = 2;
  for (int i = 1; i < N && count < N; i++) {
    ans += A.at(i);
    count++;
    if (count == N) break;
    ans += A.at(i);
    count++;
  }

  cout << ans << endl;
}