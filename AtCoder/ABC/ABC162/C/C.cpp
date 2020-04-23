#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using Graph = vector<vector<int>>;
// int gcd(int a, int b) { return b != 0 ? gcd(b, a % b) : a; }
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll K, ans = 0;
  cin >> K;
  for (int i = 1; i <= K; i++) {
    for (int j = 1; j <= K; j++) {
      for (int k = 1; k <= K; k++) {
        int tmp = std::gcd(i, j);
        ans += std::gcd(tmp, k);
      }
    }
  }
  cout << ans << endl;
}