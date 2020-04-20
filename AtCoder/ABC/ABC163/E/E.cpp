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
  vector<Pl> A;
  cin >> N;

  REP(i, N) {
    ll n;
    cin >> n;
    A.push_buck(make_pair(n, i));
  }
  sort(A.begin(), A.end(), greater());
  ll ans = 0;
  for (int i = 0; i < N; i++) {
    ll max = 0;
    ll x = 0;
    for (int j = 0; j < N; j++) {
      ll tmp = A.at(j) * abs(j - i);
      if (max <= tmp) {
        max = tmp;
        x = j;
      }
    }
    ans += max;
    cout << ans << endl;
    A.at(x) = -1;
  }

  return 0;
}