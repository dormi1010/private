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
  ll N, M, K;
  cin >> N >> M >> K;
  Vl A(N), B(M);
  REP(i, N) cin >> A.at(i);
  REP(j, M) cin >> B.at(j);
  Vl C(N + 1), D(M + 1);
  REP(i, N) C.at(i + 1) = C.at(i) + A.at(i);
  REP(i, M) D.at(i + 1) = D.at(i) + B.at(i);

  ll maxl = 0;
  for (ll i = 0; i <= N && C.at(i) <= K; i++) {
    ll nowtime = K - C.at(i);
    ll count = upper_bound(D.begin(), D.end(), nowtime) - D.begin() - 1;
    maxl = max(maxl, i + count);
    /*    printf("j = %lld: time = %lld: count = %lld: maxl = %lld\n", i,
       nowtime, count, maxl);
           */
  }

  cout << maxl << endl;
}