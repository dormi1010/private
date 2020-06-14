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
  vector<int> table(1000010);
  int N;
  cin >> N;
  vi A(N);
  int ans = 0;
  REP(i, N) {
    cin >> A.at(i);
    table.at(A.at(i))++;
  }

  for (auto a : A) {
    if (table.at(a) > 1) continue;
    bool flag = false;
    for (int j = 1; j * j <= a; j++) {
      if (a % j == 0) {
        if ((table.at(j) > 0) && (a * j != j) ||
            (table.at(a / j) > 0) && (a / j != a)) {
          flag = true;
          break;
        }
      }
    }
    if (!flag) ans++;
    // cout << a << " " << ans << endl;
  }

  cout << ans << endl;
}
