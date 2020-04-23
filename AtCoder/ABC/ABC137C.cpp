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
  int N;
  ll ans = 0;
  cin >> N;
  vector<string> str(N);
  REP(i, N) {
    cin >> str.at(i);
    sort(str.at(i).begin(), str.at(i).end());
  }
  sort(str.begin(), str.end());
  ll tmp = 1;
  for (int j = 1; j < N; j++) {
    if (str.at(j) == str.at(j - 1))
      tmp++;
    else {
      ans += (tmp * (tmp - 1)) / 2;
      tmp = 1;
    }
  }
  ans += (tmp * (tmp - 1)) / 2;

  cout << ans << endl;
}