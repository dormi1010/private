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
  int N;
  cin >> N;
  string S;
  map<string, int> V;
  REP(i, N) {
    cin >> S;
    if (V.count(S))
      V.at(S)++;
    else
      V.emplace(S, 1);
  }

  int max = 0;
  string ans;
  for (auto a : V) {
    if (max < a.second) {
      max = a.second;
      ans = a.first;
    }
  }
  cout << ans << endl;
}