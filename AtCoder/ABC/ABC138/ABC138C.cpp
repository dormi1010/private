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
  std::cout << std::fixed << std::setprecision(15);  //"for float-base problem"
  int N;
  cin >> N;
  vector<long double> vec(N);
  REP(i, N) cin >> vec.at(i);
  sort(vec.begin(), vec.end());
  REP(i, N - 1) { vec.at(i + 1) = (vec.at(i) + vec.at(i + 1)) / 2; }

  cout << vec.at(N - 1) << endl;
  return 0;
}