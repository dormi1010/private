#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string S, T, U;
  int A, B;
  cin >> S >> T >> A >> B >> U;
  if (S == U)
    A--;
  else
    B--;
  printf("%d %d\n", A, B);
}