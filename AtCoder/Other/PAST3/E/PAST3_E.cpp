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
  Graph G(N);
  REP(i, M) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    G.at(a).push_back(b);
    G.at(b).push_back(a);
  }
  vi color(N);
  REP(i, N) cin >> color.at(i);

  REP(i, Q) {
    int s;
    cin >> s;
    if (s == 1) {
      int n;
      cin >> n;
      n--;
      cout << color.at(n) << endl;
      for (auto a : G.at(n)) {
        color.at(a) = color.at(n);
      }
    } else if (s == 2) {
      int n, c;
      cin >> n >> c;
      n--;
      cout << color.at(n) << endl;
      color.at(n) = c;
    }
  }
}