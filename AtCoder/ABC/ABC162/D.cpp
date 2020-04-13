#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using Graph = vector<vector<int>>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string S;
  int N;
  cin >> N >> S;
  ll ans = 0;
  map<char, int> count;
  count['R'] = 0;
  count['G'] = 0;
  count['B'] = 0;
  int num;
  char cha;
  vector<bool> flag(3, 1);
  for (int x = 2; x < N; x++) count[S.at(x)]++;
  for (int i = 0; i < N - 2; i++) {
    char T = S.at(i);
    for (int j = i + 1; j < N - 1; j++) {
      if (S.at(j) == T) continue;
      map<char, int> tmp = count;
      tmp.erase(T);
      tmp.erase(S.at(j));
      for (int k = 2; k < j + 1; k++) {
        for (auto p : tmp) {
          num = p.second;
          cha = p.first;
          if (S.at(k) == cha) num--;
        }
      }
      if (j + j - i < N) {
        if (S.at(j + (j - i)) == cha) num--;
      }
      ans += num;
    }
  }

  cout << ans << endl;
}