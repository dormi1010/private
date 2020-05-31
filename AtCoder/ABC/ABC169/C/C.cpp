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

#define EPS 1e-3

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15);  //"for float-base
  // problem"
  ll A;
  long double B;
  cin >> A >> B;

  B = B * 100;
  B += EPS;
  int b = (int)B;
  ll C = A * b;
  C = C / 100;

  cout << C << endl;
}