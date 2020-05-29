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

  int N;
  ll K;
  cin >> N >> K;
  vi A(N);
  REP(i, N) cin >> A.at(i);
  ll ans = 0, sum = 0;
  int r = 0;
  /* thanks to @ngtkana
  for (int l = 0; l < N; l++) {
    for (int j = r; j < N; j++) {
      if (sum + A.at(j) >= K) break;
      sum += A.at(j);
      r++;
    }*/
  //    cout << l << " " << r << " " << sum << endl;

  for (int l = 0; l < N; l++) {
    while (r < N && sum + A.at(r) < K) {
      sum += A.at(r);
      r++;
    }

    //  cout << l << " " << r << " " << sum << endl;
    ans += N - r;
    sum -= A.at(l);
  }

  cout << ans << endl;
}