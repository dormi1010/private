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
/*
ll bs(ll left, ll n) {
    ll lefx =
    if(lefx <= n){
      return left;
    }else if(lefx > n && rigx
};
*/
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll A, B, X;
  cin >> A >> B >> X;
  ll MAX = 10e9, MIN = 0, p, left, q;
  if (A + B > X) {
    cout << 0 << endl;
    return 0;
  } else if (A * 1e9 + B * 10 <= X) {
    cout << (ll)1e9 << endl;
    return 0;
  }
  while (1) {
    left = MIN + (((MAX - MIN) - 1) / 2);
    string e = to_string(left);
    string e2 = to_string(left + 1);
    p = (A * left) + (B * (ll)e.size());
    q = (A * (left + 1) + (B * (ll)e2.size()));
    if (p < X && q > X || p == X && q != X) {
      cout << left << endl;
      return 0;
    } else if (q == X) {
      cout << left + 1 << endl;
      return 0;
    } else if (p < X && q < X) {
      MIN = left + 1;
    } else if (p > X) {
      MAX = left;
    } else {
      cout << "error" << endl;
      return 0;
    }
  }
}
