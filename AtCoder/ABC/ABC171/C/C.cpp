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
  ll T = N;
  ll P = 0;
  string ans;
  while (N > 26) {
    N = N / 26;
    P++;
  }
  ll MOD = 0;
  for (ll i = 1; i < P; i++) {
    ll tmp = 1;
    for (ll j = 1; j <= i; j++) {
      tmp *= 26;
    }
    MOD += tmp;
  }
  // cout << P << " " << MOD << " " << T << endl;

  while (T > 26) {
    int m = T % 26;
    if (m == 0) {
      ans += 'z';
      T--;
    } else
      ans += 'a' + (m - 1);
    T /= 26;
  }
  if (T == 0)
    ans += 'z';
  else
    ans += 'a' + (T - 1);

  reverse(ans.begin(), ans.end());
  cout << ans << endl;
}