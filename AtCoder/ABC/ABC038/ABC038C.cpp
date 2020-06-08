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
  ll N;
  cin >> N;
  vi arr(N);
  ll ans = 0;
  REP(i, N) cin >> arr.at(i);
  for (int i = 0; i < N; i++) {
    ll count = 0;
    for (int j = i + 1; j < N && arr.at(j - 1) < arr.at(j); j++) {
      count++;
      // cout << arr.at(j) << " " << count << endl;
    }

    ans += (count * (count + 1)) / 2;
    i += count;
  }
  ans += N;
  cout << ans << endl;
}