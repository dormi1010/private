#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
//#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using vi = vector<int>;
using Graph = vector<Vl>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  ll N, M;
  cin >> N >> M;
  Graph G(N);
  REP(i, N) {
    ll tmp;
    cin >> tmp;
    G.at(i).push_back(tmp);
  }
  ll ans = 0;
  vector<bool> flag(N);

  REP(j, M) {
    int A, B;
    cin >> A >> B;
    G.at(A - 1).push_back(B - 1);
    G.at(B - 1).push_back(A - 1);
  }
  for (ll n = 0; n < N; n++) {
    if (flag.at(n) == true) continue;
    ll H = G.at(n).at(0);
    for (ll q = 1; q < G.at(n).size(); q++) {
      ll query = G.at(n).at(q);
      if (H > G.at(query).at(0)) {
        flag.at(query) = true;
        //       cout << query << "is short than" << n << endl;
      } else if (H == G.at(query).at(0)) {
        flag.at(query) = true;
        flag.at(n) = true;
        //        cout << query << "equal" << n << endl;
        continue;
      } else {
        flag.at(n) = true;
        //        cout << n << "is short than" << query << endl;
        continue;
      }
    }
    if (!flag.at(n)) {
      ans++;
      //     cout << n << endl;
    }
  }
  cout << ans << endl;
}