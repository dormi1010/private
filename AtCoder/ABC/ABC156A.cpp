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
  int N, R;
  cin >> N >> R;
  if (N < 10) {
    cout << R + ((10 - N) * 100) << endl;
  } else
    cout << R << endl;
  return 0;
}