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

void solve() {
  int n, prime;
  cin >> n;
  if (n % 2 == 0)
    cout << n / 2 << " " << n / 2 << endl;
  else {
    prime = n;
    for (int i = 3; i * i <= n; i++) {
      if (n % i == 0) {
        prime = i;
        break;
      }
    }

    cout << (n / prime) * (prime - 1) << " " << (n / prime) << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int n;
  cin >> n;
  REP(i, n) solve();
}