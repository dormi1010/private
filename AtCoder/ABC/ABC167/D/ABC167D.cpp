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
  Graph G;
  ll N, K;
  cin >> N >> K;
  vector<ll> flag(N, -1);
  vector<ll> Town(N);
  REP(i, N) {
    cin >> Town.at(i);
    Town.at(i)--;
  }
  ll BEGIN = 0, END = 0, START = 0;
  ll next = Town.at(0);
  bool check = false;
  ll i = 0;
  while (!check) {
    i++;
    if (flag.at(next) == -1) {
      flag.at(next) = i;
      next = Town.at(next);
    } else {
      BEGIN = flag.at(next);
      END = i;
      START = next;
      check = true;
    }
  }
  ll Ans = 0;
  if (K < BEGIN) {
    REP(i, K) Ans = Town.at(Ans);
  } else {
    ll MOD = (K - BEGIN) % (END - BEGIN);
    Ans = START;
    REP(x, MOD) Ans = Town.at(Ans);
  }
  //  cout << BEGIN << " " << END << " " << START << endl;
  cout << Ans + 1 << endl;
}