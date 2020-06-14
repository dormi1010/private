#pragma GCC optimize("Ofast")
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
ll gcd(ll a, ll b) { return b != 0 ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a * b / gcd(a, b); }
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  /*body*/
  int N;
  cin >> N;
  vi A(N);
  set<int> num;
  int ans = 1;
  REP(i, N) cin >> A.at(i);
  sort(A.begin(), A.end());

  num.insert(A.at(0));
  int big = A.at(N - 1);

  int now = A.at(0);
  bool same = false;

  for (int i = 1; i < N; i++) {
    //  cout << ans << " " << A.at(i) << endl;
    bool flag = false;
    if (now == A.at(i)) {
      same = true;
      continue;
    }
    if (same && now != A.at(i)) {
      ans--;
      same = false;
    }
    for (auto x : num) {
      if (A.at(i) % x == 0) {
        flag = true;
        break;
      }
    }
    if (flag) continue;
    ans++;
    if (A.at(i) * 2 <= big) num.insert(A.at(i));
    now = A.at(i);
  }
  if (same) ans--;
  cout << ans << endl;
}