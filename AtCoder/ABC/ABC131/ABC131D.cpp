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
  ll N;
  cin >> N;
  vector<Pl> Tasks(N);
  REP(i, N) cin >> Tasks.at(i).second >> Tasks.at(i).first;
  sort(Tasks.begin(), Tasks.end());
  ll Time = 0;
  for (auto a : Tasks) {
    Time += a.second;
    if (Time > a.first) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}