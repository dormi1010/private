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
  int N;
  string S = "b", s;
  cin >> N >> s;
  for (int i = 1; S.size() <= N + 2; i++) {
    if (s == S) {
      cout << i - 1 << endl;
      return 0;
    }
    if (i % 3 == 1) {
      S.push_back('c');
      S.insert(0, "a");
    } else if (i % 3 == 2) {
      S.push_back('a');
      S.insert(0, "c");
    } else {
      S.push_back('b');
      S.insert(0, "b");
    }
  }
  cout << -1 << endl;
  return 0;
}