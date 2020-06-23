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

const ll MOD = 1000000007;
ll table[2000000] = {0, 1};
bool flag[2000000] = {false};
ll settable(ll n) {
  if (table[n] != -1) return table[n];
  ll ret = 0;
  ret += settable(n - 1) + 2 * settable(n - 2);
  if (table[n] == -1) table[n] = ret;
  return ret;
}

void solve() {
  int x;
  cin >> x;
  if (x < 3) {
    cout << 0 << endl;
    return;
  }
  cout << table[x - 2] * 4 % MOD << endl;
  return;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  flag[1] = true;
  for (int i = 2; i < 2000000; i++) {
    if (!flag[i - 1] && !flag[i - 2]) flag[i] = true;
    table[i] = (table[i - 1] + (table[i - 2] * 2) + flag[i]) % MOD;
  }
  // REP(i, 10) cout << table[i] << endl;

  int n;
  cin >> n;
  REP(i, n) solve();
}