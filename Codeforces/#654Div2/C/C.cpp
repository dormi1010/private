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

void solve(ll a, ll b, ll n, ll m) {
  // cout << a << " " << b << " " << n << " " << m << endl;
  if ((a + b) < (n + m)) {
    cout << "No" << endl;
    return;
  }
  if (min(a, b) < m)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;

  return;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int n;
  cin >> n;
  REP(i, n) {
    ll a, b, n, m;
    cin >> a >> b >> n >> m;
    solve(a, b, n, m);
  }
}