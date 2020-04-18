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
  ll N;
  cin >> N;
  set<ll> S;
  ll tmp;
  REP(i, N) {
    cin >> tmp;
    if (S.count(tmp))
      S.erase(tmp);
    else
      S.insert(tmp);
    }

  cout << S.size() << endl;
}