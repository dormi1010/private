#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<string> S(n);
  REP(i, n) cin >> S.at(i);
  string ans = "";
  sort(S.at(0).begin(), S.at(0).end());
  for (auto s : S.at(0)) {
    bool FLG = true;
    for (int j = 1; j < n; j++) {
      bool flag = false;
      for (int k = 0; k < S.at(j).size(); k++) {
        if (s == S.at(j).at(k)) {
          S.at(j).at(k) = '0';
          flag = true;
          break;
        }
      }
      if (!flag) {
        FLG = false;
        break;
      }
    }
    if (FLG) ans += s;
  }
  cout << ans << endl;
}