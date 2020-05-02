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

int N, M, Q;

vector<vi> vects;

void dfs(vector<int> vec, int n) {
  vec.push_back(n);
  if (vec.size() == N) {
    vects.push_back(vec);
    return;
  }
  for (int i = vec.at(vec.size() - 1); i <= M; i++) {
    dfs(vec, i);
  }
  return;
};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  cin >> N >> M >> Q;
  vi vec;
  ll ans = 0;
  dfs(vec, 1);
  /*  for (auto x : vects) {
      for (auto y : x) {
        cout << y << " ";
      }
      cout << endl;
    }*/
  vector<vi> Query;
  REP(i, Q) {
    vi q(4);
    cin >> q.at(0) >> q.at(1) >> q.at(2) >> q.at(3);
    Query.push_back(q);
  }
  for (auto x : vects) {
    ll tmp = 0;
    for (auto q : Query) {
      if (x.at(q[1] - 1) - x.at(q[0] - 1) == q[2]) tmp += q[3];
    }
    ans = max(ans, tmp);
  }
  cout << ans << endl;

  return 0;
}
