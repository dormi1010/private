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
  ll N, A, B, C;
  Vl V(3);
  cin >> N >> V[0] >> V[1] >> V[2];
  vector<string> S(N);
  vector<char> Ans;
  REP(i, N)
  cin >> S.at(i);
  REP(j, N) {
    ll L, R;
    L = V.at((int)S.at(j).at(0) - 'A');
    R = V.at((int)S.at(j).at(1) - 'A');
    if (L == 0 && R == 0) {
      cout << "No" << endl;
      return 0;
    } else if (R == 0) {
      L--;
      R++;
      Ans.push_back(S.at(j).at(1));
    } else if (L == 0) {
      L++;
      R--;
      Ans.push_back(S.at(j).at(0));
    } else if (V[0] + V[1] + V[2] == 2 && j != N - 1) {
      if (S.at(j + 1).at(0) == S.at(j).at(0) ||
          S.at(j + 1).at(1) == S.at(j).at(0)) {
        L++;
        R--;
        Ans.push_back(S.at(j).at(0));
      } else {
        if (L >= R) {
          L--;
          R++;
          Ans.push_back(S.at(j).at(1));
        } else {
          L++;
          R--;
          Ans.push_back(S.at(j).at(0));
        }
      }
    } else {
      if (L >= R) {
        L--;
        R++;
        Ans.push_back(S.at(j).at(1));
      } else {
        L++;
        R--;
        Ans.push_back(S.at(j).at(0));
      }
    }
    V.at((int)S.at(j).at(0) - 'A') = L;
    V.at((int)S.at(j).at(1) - 'A') = R;
  }

  cout << "Yes" << endl;
  REP(k, N) cout << Ans.at(k) << endl;
  return 0;
}
