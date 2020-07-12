//#define _GLIBCXX_DEBUG
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
const ll MOD = 1000000007;

// mod. m での a の逆元 a^{-1} を計算する
long long modinv(long long a, long long m) {
  long long b = m, u = 1, v = 0;
  while (b) {
    long long t = a / b;
    a -= t * b;
    swap(a, b);
    u -= t * v;
    swap(u, v);
  }
  u %= m;
  if (u < 0) u += m;
  return u;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  ll N, K, ans = 1, flag = 1;
  cin >> N >> K;

  //全部使う場合は自明
  if (N == K) {
    REP(i, N) {
      ll tmp;
      cin >> tmp;
      ans = (ans * tmp) % MOD;
    }
    cout << (MOD + ans) % MOD << endl;
    return 0;
  }

  Vl A(N), M, P;
  REP(i, N) {
    cin >> A[i];
    if (A[i] <= 0)
      M.push_back(A[i]);
    else
      P.push_back(A[i]);
  }

  sort(P.begin(), P.end(), greater());
  sort(M.begin(), M.end());

  //答えが負になる
  if (P.size() == 0 && K % 2 == 1) {
    REP(i, K) { ans = (ans * M.at(M.size() - 1 - i)) % MOD; }
    cout << (MOD + ans) % MOD << endl;
    return 0;
  }

  sort(A.begin(), A.end(),
       [](int i, int j) -> bool { return abs(i) > abs(j); });

  REP(i, K - 1) { ans = (ans * A.at(i)) % MOD; }
  if (ans * A.at(K - 1) >= 0) {
    cout << (ans * A.at(K - 1)) % MOD << endl;
    return 0;
  } else {  //今負数
    //それより後ろに正、負の整数が存在するか
    bool pflag = false, mflag = false;
    for (int p = K; p < N; p++) {
      if (A.at(p) >= 0)
        pflag = true;
      else
        mflag = true;
    }

    if (A.at(K - 1) >= 0) {  //絶対値最小が正
      if (!mflag) {          //後ろに負の数が存在しない
                             // cout << "exit2" << endl;
        int rem = 0;
        for (int q = K - 1; q >= 0; q--) {
          if (A.at(q) < 0) {  //絶対値最小の負数を除外
            rem = A.at(q);
            // cout << rem << " " << ans << " " << A.at(K) << endl;
            ans = ans * modinv(rem, MOD) % MOD;
            break;
          }
        }
        ans = (ans * A.at(K - 1)) % MOD;
        ans = (ans * A.at(K)) % MOD;  //絶対値最大の非負整数を乗算
        cout << ans << endl;
        return 0;  //終わり

      } else {
        int j = K - 1;
        while (j < N - 1) {
          j++;
          if (A.at(j) < 0) break;
        }
        cout << (ans * A.at(j)) % MOD << endl;
      }

    } else {         //絶対値最小が負
                     // cout << "exit4" << endl;
      if (!pflag) {  //後ろに非負整数が存在しない
        int rem = 0;
        for (int q = K - 1; q >= 0; q--) {
          if (A.at(q) >= 0) {  //絶対値最小の非負整数を除外
            rem = A.at(q);
            // cout << rem << " " << ans << " " << A.at(K) << endl;
            ans = ans * modinv(rem, MOD) % MOD;
            break;
          }
        }
        ans = (ans * A.at(K)) % MOD;  //絶対値最大の負整数を乗算
        cout << (ans * A.at(K - 1)) % MOD << endl;
        return 0;  //終わり
      }
      cout << "exit4" << endl;
      int j = K - 1;
      while (j < N - 1) {
        j++;
        if (A.at(j) >= 0) break;
      }
      // cout << ans << " " << A.at(j) << endl;
      cout << (ans * A.at(j)) % MOD << endl;
    }
  }
  return 0;
}