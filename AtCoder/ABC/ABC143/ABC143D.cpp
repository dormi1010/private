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
  ll ans = 0;
  cin >> N;
  vi L(N);
  REP(i, N) cin >> L.at(i);
  sort(L.begin(), L.end());
  L.push_back(99999);
  for (int j = 0; j < N - 2; j++) {
    for (int k = j + 1; k < N - 1; k++) {
      for (int m = k + 1; m <= N; m++) {
        if (L.at(m) >= L.at(j) + L.at(k)) {
          ans += (m - k - 1);
          //          cout << ans << endl;
          break;
        }
      }
    }
  }
  cout << ans << endl;
}