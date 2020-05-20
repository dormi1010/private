#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)

using namespace std;

int main() {
  int K, S;
  cin >> K >> S;
  int Ans = 0;
  REP(i, min(S + 1, K + 1)) {
    if (S - i > 2 * K)
      continue;
    else if (S - i <= K) {
      Ans += (S - i + 1);
    } else
      Ans += (K + 1) - abs(S - i - K);
  }
  cout << Ans << endl;
  return 0;
}