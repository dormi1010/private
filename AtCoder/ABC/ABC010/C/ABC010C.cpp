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
  Pi bef, aft;
  int T, V;
  cin >> bef.first >> bef.second >> aft.first >> aft.second >> T >> V;
  int n;
  cin >> n;
  vector<Pi> G(n);
  REP(i, n) cin >> G.at(i).first >> G.at(i).second;
  double M = T * V * 1.0;
  for (auto a : G) {
    double dist = sqrt((double)pow((a.first - bef.first), 2.0) +
                       (double)pow((a.second - bef.second), 2.0));
    dist += sqrt((double)pow((aft.first - a.first), 2.0) +
                 (double)pow((aft.second - a.second), 2.0));
    if (dist <= M) {
      cout << "YES" << endl;
      return 0;
    }
  }

  cout << "NO" << endl;
  return 0;
}