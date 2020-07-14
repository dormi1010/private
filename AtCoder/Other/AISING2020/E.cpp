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
#define INF 2000000000
void solve() {
  int N;
  ll ans = 0;
  cin >> N;
  vector<tuple<int, int, int>> L;
  vector<tuple<int, int, int>> R;
  vector<tuple<int, int, int>> E;
  REP(i, N) {
    int k, l, r;
    cin >> k >> l >> r;
    if (l == r || k >= N) {
      E.push_back(make_tuple(k, l, r));
    } else if (l > r) {
      L.push_back(make_tuple(k, l, r));
    } else if (r > l) {
      R.push_back(make_tuple(k, l, r));
    } else {
      cout << "vector error!" << endl;
      exit(1);
    }
  }

  for (auto e : E) {
    ans += get<1>(e);
  }

  sort(L.begin(), L.end());
  sort(R.begin(), R.end(),greater());
  priority_queue<int, vector<int>, greater<int>> pq;
  vi Lsa, Rsa;
  int ind = 0, LX = 0;
  for (auto t : L) {
    ind++;
    ans += get<1>(t);
    int sa = (get<1>(t) - get<2>(t));
    pq.push(sa);
    while (ind > get<0>(t)) {
      ind--;
      ans -= pq.top();
      pq.pop();
      LX++;
    }
  }
  ind = N;

  priority_queue<int, vector<int>, greater<int>> qp;
  for (auto t : R) {
    ind--;
    ans += get<2>(t);
    int sa = (get<2>(t) - get<1>(t));
    qp.push(sa);
    while (ind < get<0>(t)) {
      ind++;
      ans -= qp.top();
      qp.pop();
    }
    //cout << ans << " ";
  }

  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int T;
  cin >> T;
  REP(i, T) solve();
  return 0;
}