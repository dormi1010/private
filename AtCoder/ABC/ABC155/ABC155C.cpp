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
  map<string, int> S;
  vector<string> ans;
  vector<string> zero;
  REP(i, N) {
    string tmp;
    cin >> tmp;
    if (S.count(tmp))
      S[tmp]++;
    else
      S.emplace(tmp, 1);
  }
  int max = 0;
  for (auto p : S) {
    if (p.second > max) max = p.second;
  }

  for (auto x : S) {
    if (x.second == max) {
      ans.push_back(x.first);
    }
  }
  for (auto s : ans) {
    cout << s << endl;
  }
}