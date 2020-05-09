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

void solve() {
  int n;
  cin >> n;
  deque<int> a;
  REP(i, n) {
    int t;
    cin >> t;
    a.push_back(t);
  }
  int move = 0, now = 0, pre = 0, Alice = 0, Bob = 0;
  while (!a.empty()) {
    move++;
    if (move % 2 == 1) {
      while (now <= pre && !a.empty()) {
        now += a.front();
        a.pop_front();
      }
      Alice += now;
      pre = now;
      now = 0;
    } else {
      while (now <= pre && !a.empty()) {
        now += a.back();
        a.pop_back();
      }
      Bob += now;
      pre = now;
      now = 0;
    }
  }

  cout << move << " " << Alice << " " << Bob << endl;
}

int main() {
  // cin.tie(0);
  // ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int t;
  cin >> t;
  REP(i, t) solve();
  return 0;
}