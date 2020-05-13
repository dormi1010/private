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
  int N, L = 0, R = 0;
  cin >> N;
  REP(i, N) {
    string S;
    int l = 0, r = 0;
    cin >> S;
    for (auto s : S) {
      if (s == ')' && l == 0)
        r++;
      else if (s == ')' && l != 0)
        l--;
      else if (s == '(')
        l++;
    }
    //   cout << l << " " << r << endl;
    int tmp;
    if (L != 0 && r > l) {
      tmp = L;
      L = max(0, tmp - r);
      r = max(0, r - tmp);
    } else if (R != 0 && l <= r) {
      tmp = R;
      R = max(0, tmp - l);
      l = max(0, l - tmp);
    }
    L += l;
    R += r;
    //   cout << L << " " << R << endl;
  }
  if (L == 0 && R == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}