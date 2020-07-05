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
  int N, AC = 0, WA = 0, TLE = 0, RE = 0;
  cin >> N;
  REP(i, N) {
    string S;
    cin >> S;

    if (S == "AC")
      AC++;
    else if (S == "WA")
      WA++;
    else if (S == "TLE")
      TLE++;
    else
      RE++;
  }
  cout << "AC x " << AC << endl;
  cout << "WA x " << WA << endl;
  cout << "TLE x " << TLE << endl;
  cout << "RE x " << RE << endl;
}