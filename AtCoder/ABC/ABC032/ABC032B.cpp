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
  string s;
  cin >> s;
  int k;
  cin >> k;
  if (s.size() < k) {
    cout << 0 << endl;
    return 0;
  }
  set<string> P;
  for (int i = 0; i <= s.size() - k; i++) {
    string sub = s.substr(i, k);
    if (P.count(sub))
      continue;
    else
      P.insert(sub);
  }
  cout << P.size() << endl;
  return 0;
}