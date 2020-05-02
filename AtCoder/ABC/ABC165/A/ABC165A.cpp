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
  ll A, B, K;
  string S;
  cin >> K >> A >> B;
  for (ll i = A; i <= B; i++) {
    if (i % K == 0) {
      cout << "OK" << endl;
      return 0;
    }
  }
  cout << "NG" << endl;
  return 0;
}