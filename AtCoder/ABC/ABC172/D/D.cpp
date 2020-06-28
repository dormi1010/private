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
ll divi_count(long long N) {
  ll res = 0;
  for (long long i = 1; i * i <= N; ++i) {
    if (N % i == 0) {
      res++;
      // 重複しないならば i の相方である N/i も push
      if (N / i != i) res++;
    }
  }
  return res;
}

map<long long, long long> prime_factorize(long long N) {
  map<long long, long long> res;
  for (long long a = 2; a * a <= N; ++a) {
    if (N % a != 0) continue;
    long long ex = 0;  // 指数

    // 割れる限り割り続ける
    while (N % a == 0) {
      ++ex;
      N /= a;
    }

    // その結果を push
    res[a] = ex;
  }

  // 最後に残った数について
  if (N != 1) res[N] = 1;
  return res;
}

Vl dp(10000001, 2);
vector<map<ll, ll>> mp;
set<ll> prime;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int N;
  cin >> N;
  ll ans = 0;
  /*
  mp.push_back(prime_factorize(0));
  mp.push_back(prime_factorize(1));
*/
  for (int i = 2; i * i <= N; i++) {
    for (int j = i; i * j <= N; j++) {
      dp[i * j]++;
      if (i != j) dp[i * j]++;
    }
  }
  /*
    for (int i = 2; i <= N; i++) {
      map<ll, ll> pf;
      bool flag = false;
      for (auto p : prime) {
        if (i % p == 0) {
          pf = mp.at(i / p);
          pf[p]++;
          mp.push_back(pf);
          flag = true;
          break;
        }
      }
      if (flag) {
        ll count = 1;
        for (auto a : pf) {
          count *= (a.second + 1);
        }
        ans += i * count;
        //    for (auto p : pf) cout << p.first << " " << p.second << endl;
        continue;
      }
      prime.insert(i);
      pf[i] = 1;
      mp.push_back(pf);
      ans += i * 2;
      // cout << ans << endl;
    }
    */
  for (int i = 2; i <= N; i++) {
    ans += i * dp.at(i);
  }
  cout << ans + 1 << endl;
}