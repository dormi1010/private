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

map<int64_t, int> prime_factor(int64_t n) {
  map<int64_t, int> ret;
  for (int64_t i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      ret[i]++;
      n /= i;
    }
  }
  if (n != 1) ret[n] = 1;
  return ret;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  //
  cout << fixed << setprecision(15);  //"for float-base
  // problem"
  ll N;
  cin >> N;
}