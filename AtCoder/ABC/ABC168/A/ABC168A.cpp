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
  int A, N, X;
  string S, T;
  cin >> N;
  if (N % 10 <= 1 || N % 10 == 6 || N % 10 == 8)
    cout << "pon" << endl;
  else if (N % 10 == 3)
    cout << "bon" << endl;
  else
    cout << "hon" << endl;

  return 0;
}