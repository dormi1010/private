#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vecl = vector<ll>;
using Vi = vector<int>;
using Graph = vector<vector<int>>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N;
  cin >> N;
  Vi A(N);
  REP(i, N) cin >> A[i];
  REP(j, N) {
    if (A[j] % 2 == 1)
      continue;
    else if (A[j] % 3 != 0 && A[j] % 5 != 0) {
      cout << "DENIED" << endl;
      return 0;
    }
  }
  cout << "APPROVED" << endl;
  return 0;
}