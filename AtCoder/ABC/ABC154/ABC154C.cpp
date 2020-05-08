#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vecl = vector<ll>;
using Graph = vector<vector<int>>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll N;
  cin >> N;
  set<ll> A;
  REP(i, N) {
    ll tmp;
    cin >> tmp;
    if (A.count(tmp)) {
      cout << "NO" << endl;
      return 0;
    } else
      A.insert(tmp);
  }
  cout << "YES" << endl;
  return 0;
}