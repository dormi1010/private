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
  cin >> N;
  vi X(N);
  REP(i, N) cin >> X.at(i);
  ll min = 1e9;
  for (int j = 1; j <= 100; j++) {
    ll tmp = 0;
    for (int k = 0; k < N; k++) {
      tmp += (X.at(k) - j) * (X.at(k) - j);
    }
    if (tmp < min) min = tmp;
  }
  cout << min << endl;
}