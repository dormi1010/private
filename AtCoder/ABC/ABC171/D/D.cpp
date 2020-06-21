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
  int N, Q;
  map<int, int> mp;
  cin >> N;
  vi A(N);

  REP(i, N) {
    int tmp;
    cin >> tmp;
    if (mp.count(tmp))
      mp[tmp]++;
    else
      mp[tmp] = 1;
  }
  ll ans = 0;
  for (auto a : mp) {
    ans += a.first * a.second;
  }

  cin >> Q;
  REP(i, Q) {
    int B, C;
    cin >> B >> C;
    if (mp.count(B)) {
      ans += (C * mp[B]) - (B * mp[B]);
      if (!mp.count(C))
        mp[C] = mp.at(B);
      else
        mp.at(C) += mp.at(B);
      mp.erase(B);
    }
    cout << ans << endl;
  }
}