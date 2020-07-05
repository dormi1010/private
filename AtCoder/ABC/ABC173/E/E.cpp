#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
//
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using vi = vector<int>;
using Graph = vector<vi>;
const ll MOD = 1000000009;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  ll N, K, mai = 0, pla = 0, ans = 0;
  cin >> N >> K;
  Vl A(N), M, P;
  REP(i, N) {
    cin >> A[i];
    if (A[i] < 0)
      M.push_back(A[i]);
    else
      P.push_back(A[i]);
  }
  M.push_back(0), P.push_back(0);
  sort(P.begin(), P.end(), greater());
  sort(M.begin(), M.end());
  int i = 0, j = 0;
  int imax = P.size(), jmax = M.size();

  while (K > 1) {
    if (i > imax - 2 && j > jmax - 2) {
      ans *= (P[i] * M[j]) % MOD;
      ans %= MOD;
      K -= 2;
      i++;
      j++;
      continue;
    } else if (i > imax - 2) {
      ans *= (M[j] * M[j + 1]) % MOD;
      ans %= MOD;
      j += 2;
      K -= 2;
      continue;
    } else if (j > jmax > 2) {
      ans *= (P[i] * P[i + 1]) % MOD;
      ans %= MOD;
      i += 2;
      K -= 2;
      continue;
    }
    ll Pl = P[i] * P[i + 1], Mi = M[j] * M[j + 1];
    if (Pl > Mi) {
      i += 2;
      ans = ans * (Pl % MOD) % MOD;
    } else {
      j += 2;
      ans = ans * (Mi % MOD) % MOD;
    }
    K -= 2;
  }

  if (K > 0) {
    if (i >= imax) {
      ans *= M[j];
      ans %= MOD;
    } else {
      ans *= P[i] % MOD;
      ans %= MOD;
    }
  }

  cout << ans << endl;
}