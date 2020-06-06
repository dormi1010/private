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
  int N, M, Q;
  cin >> N >> M >> Q;
  vi problems(M, N);
  vector<vi> contestants(N);
  REP(i, Q) {
    int s;
    cin >> s;
    if (s == 1) {
      int c, sum = 0;
      cin >> c;
      c--;
      for (auto x : contestants.at(c)) {
        sum += problems.at(x);
      }
      cout << sum << endl;
    } else {
      int c, p;
      cin >> c >> p;
      c--, p--;
      problems.at(p)--;
      contestants.at(c).push_back(p);
    }
  }
}