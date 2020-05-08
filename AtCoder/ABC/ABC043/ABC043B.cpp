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
  string ans;
  cin >> s;
  for (auto a : s) {
    if (a == '0')
      ans.push_back('0');
    else if (a == '1')
      ans.push_back('1');
    else {
      if (!ans.empty()) ans.pop_back();
    }
  }
  cout << ans << endl;
}