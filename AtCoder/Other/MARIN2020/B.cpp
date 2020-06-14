#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
//#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  ll A, V, B, K, T;
  cin >> A >> V >> B >> K >> T;
  ll dist = A - B;
  if (dist < 0)
    dist *= -1;
  else if (dist == 0) {
    cout << "YES" << endl;
    return 0;
  }
  if (V - K <= 0 && dist > 0) {
    cout << "NO" << endl;
    return 0;
  }
  ll time = (dist + (V - K - 1)) / (V - K);
  if (time <= T)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}