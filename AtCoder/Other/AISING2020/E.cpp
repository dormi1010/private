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
#define INF 2000000000
void solve() {
  int N;
  ll ans = 0;
  cin >> N;
  vector<tuple<int, int, int>> L;
  vector<tuple<int, int, int>> LX;
  vector<tuple<int, int, int>> R;
  vector<tuple<int, int, int>> RX;
  vector<tuple<int, int, int>> E;
  REP(i, N) {
    int k, l, r;
    cin >> k >> l >> r;
    if (l == r || k >= N) {
      E.push_back(make_tuple(k, l, r));
    } else if (l > r) {
      L.push_back(make_tuple(k, l, r));
    } else if (r > l) {
      R.push_back(make_tuple(k, l, r));
    } else {
      cout << "vector error!" << endl;
      exit(1);
    }
  }

  for (auto e : E) {
    ans += get<1>(e);
  }

  sort(L.begin(), L.end());
  sort(R.begin(), R.end());
  priority_queue<int> sa;
  vi Lsa, Rsa;
  int ind = 1;
  for (auto t : L) {
    //入れなかったのは横に置いとく
    if (get<0>(t) < ind) {
      ans += get<2>(t);
      LX.push_back(t);
      continue;
    }
    ind++;
    ans += get<1>(t);
    Lsa.push_back(get<1>(t) - get<2>(t));
  }
  ind += E.size() + LX.size();

  for (auto t : R) {
    //入れなかったのは横に置いとく
    if (get<0>(t) > ind) {
      ans += get<1>(t);
      RX.push_back(t);
      ind++;
      continue;
    }
    ind++;
    ans += get<2>(t);
    Rsa.push_back(get<2>(t) - get<1>(t));
  }

  for (auto t : LX) {
    int sa = get<1>(t) - get<2>(t);
    int k = get<0>(t);
    int minsa = INF, mink = INF;
    REP(i, k) {
      if (minsa > Lsa.at(i)) {
        minsa = Lsa.at(i);
        mink = i;
      }
    }
    if (sa > minsa) {
      ans += (sa - minsa);
      Lsa.at(mink) = sa;
    }
  }

  cout << ans << endl;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int T;
  cin >> T;
  REP(i, T) solve();
  return 0;
}