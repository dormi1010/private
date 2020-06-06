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

vector<vector<string>> Z = {
    {{"###"}, {"#.#"}, {"#.#"}, {"#.#"}, {"###"}},  // 0
    {{".#."}, {"##."}, {".#."}, {".#."}, {"###"}},  // 1
    {{"###"}, {"..#"}, {"###"}, {"#.."}, {"###"}},  // 2
    {{"###"}, {"..#"}, {"###"}, {"..#"}, {"###"}},  // 3
    {{"#.#"}, {"#.#"}, {"###"}, {"..#"}, {"..#"}},  // 4
    {{"###"}, {"#.."}, {"###"}, {"..#"}, {"###"}},  // 5
    {{"###"}, {"#.."}, {"###"}, {"#.#"}, {"###"}},  // 6
    {{"###"}, {"..#"}, {"..#"}, {"..#"}, {"..#"}},  // 7
    {{"###"}, {"#.#"}, {"###"}, {"#.#"}, {"###"}},  // 8
    {{"###"}, {"#.#"}, {"###"}, {"..#"}, {"###"}},  // 9
};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"

  int N;
  cin >> N;
  vector<string> S;
  vi number(N);
  REP(i, 5) {
    string s;
    cin >> s;
    S.push_back(s);
  }
  REP(i, N) {
    vector<string> sub;
    for (auto ss : S) {
      sub.push_back(ss.substr(4 * i + 1, 3));
    }

    int index = 0;
    for (auto zz : Z) {
      if (zz == sub) {
        cout << index;
        break;
      } else
        index++;
    }
  }
}