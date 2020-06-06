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
  int N;
  cin >> N;
  vector<string> A;
  vector<char> S(N);
  REP(i, N) {
    string s;
    cin >> s;
    A.push_back(s);
  }

  for (int i = 0; i < N / 2; i++) {
    int front = i, buck = N - 1 - i;
    bool flag = false;
    for (auto f : A.at(front)) {
      for (auto b : A.at(buck)) {
        if (f == b) {
          S.at(front) = S.at(buck) = f;
          flag = true;
          break;
        }
      }
      if (flag) break;
    }
    if (!flag) {
      cout << -1 << endl;
      return 0;
    }
  }

  if (N % 2 == 1) S.at(N / 2) = A.at(N / 2).at(0);
  for (auto c : S) cout << c;
  cout << '\n';
  return 0;
}