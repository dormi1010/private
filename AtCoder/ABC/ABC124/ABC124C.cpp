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
  string S;
  cin >> S;
  int ans1 = 0, ans2 = 0;
  REP(i, S.size()) {
    if (i % 2 == 0 && S.at(i) == '0')
      ans1++;
    else if (i % 2 != 0 && S.at(i) == '1')
      ans1++;
  }
  REP(j, S.size()) {
    if (j % 2 == 0 && S.at(j) == '1')
      ans2++;
    else if (j % 2 != 0 && S.at(j) == '0')
      ans2++;
  }
  cout << min(ans1, ans2) << endl;
}