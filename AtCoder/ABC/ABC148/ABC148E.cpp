#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
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
  ll N, ans = 0;
  cin >> N;
  if (N % 2 == 1) {
    cout << 0 << endl;
    return 0;
    //    for (int i = 1; i <= 18; i++) {
    //      ans += N / pow(5, i);
  }

  else {
    N = N / 2;
    for (int i = 1; i <= 28; i++) {
      ans += N / (ll)pow(5, i);
    }
  }
  cout << ans << endl;
}