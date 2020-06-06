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
  bool flag1 = false, flag2 = false;
  string s, t;
  cin >> s >> t;
  for (int i = 0; i < 3; i++) {
    if (s.at(i) != t.at(i)) flag1 = true;
    if (s.at(i) != t.at(i) && s.at(i) + ('a' - 'A') != t.at(i) &&
        s.at(i) != t.at(i) + ('a' - 'A'))
      flag2 = true;
  }
  // cout << 'a' - 'A' << endl;
  if (!flag1)
    cout << "same" << endl;
  else if (!flag2)
    cout << "case-insensitive" << endl;
  else
    cout << "different" << endl;
}