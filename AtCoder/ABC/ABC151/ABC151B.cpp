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
  int N, K, M;
  cin >> N >> K >> M;
  int sum = 0, target = N * M;
  REP(i, N - 1) {
    int t;
    cin >> t;
    sum += t;
  }
  if (target - sum > K)
    cout << -1 << endl;
  else
    cout << max(0, target - sum) << endl;
}