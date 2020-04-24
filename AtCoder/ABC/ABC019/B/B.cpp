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
  string s;
  cin >> s;
  char c = '0';
  int t = 0;
  string ans;
  for (auto x : s) {
    if (x == c)
      t++;
    else if (c == '0') {
      c = x;
      t = 1;
    } else {
      ans += c;
      ans += to_string(t);
      c = x;
      t = 1;
    }
  }
  ans += c;
  ans += to_string(t);
  cout << ans << endl;
}