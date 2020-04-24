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
  string S;
  cin >> S;
  vector<string> ans = {"Do", "Re", "Mi", "Fa", "So", "La", "Si"};
  char c = S.at(0);
  int d1 = 0;
  int d2 = 0;
  for (int i = 1; i < S.size(); i++) {
    if (S.at(i) == c && c == 'W') {
      c = 'B';
      for (int j = i + 1; j < S.size(); j++) {
        if (S.at(j) == c && c == 'W') {
          d2 = j;
          break;
        } else {
          c = S.at(j);
        }
      }
      d1 = i;
      break;
    } else {
      c = S.at(i);
    }
  }
  // cout << d1 << " " << d2 << endl;
  if (d2 - d1 == 7) {
    cout << ans.at(3 - ((d1 + 1) / 2)) << endl;
  } else
    cout << ans.at(7 - ((d1 + 1) / 2)) << endl;
}