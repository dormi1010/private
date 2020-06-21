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
  cin >> N;
  Vl A(N);
  ll total = 0;
  REP(i, N) {
    cin >> A.at(i);
    total ^= A.at(i);
  }

  REP(j, N) {
    int ans = total ^ A.at(j);
    cout << ans << " ";
  }

  cout << "\n";
}