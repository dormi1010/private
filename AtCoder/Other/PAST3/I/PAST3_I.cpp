#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
//#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using vi = vector<int>;
using Graph = vector<Vl>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int N, Q;
  cin >> N;
  Vl gyo(N), retsu(N);
  REP(i, N) {
    gyo.at(i) = N * i;
    retsu.at(i) = i;
  }

  int flag = 1;
  cin >> Q;
  REP(i, Q) {
    int q, a, b;
    cin >> q;
    if (flag == -1 && q == 2)
      q = 1;
    else if ((flag == -1 && q == 1))
      q = 2;
    if (q == 4) {
      cin >> a >> b;
      a--;
      b--;
      if (flag == -1)
        cout << retsu.at(a) + gyo.at(b) << endl;
      else
        cout << gyo.at(a) + retsu.at(b) << endl;
    } else if (q == 3) {
      flag *= -1;
    } else if (q == 2) {
      cin >> a >> b;
      a--;
      b--;
      if (a == b) continue;
      ll tmp;
      tmp = retsu.at(a);
      retsu.at(a) = retsu.at(b);
      retsu.at(b) = tmp;

    } else if (q == 1) {
      cin >> a >> b;
      a--;
      b--;
      if (a == b) continue;
      ll tmp;
      tmp = gyo.at(a);
      gyo.at(a) = gyo.at(b);
      gyo.at(b) = tmp;
    }
  }
}