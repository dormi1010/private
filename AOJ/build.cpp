#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
#define ll long long
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> a(n);

  REP(i, n)
  cin >> a.at(i);
  reverse(a.begin(), a.end());
  REP(i, n - 1)
  cout << a.at(i) << " ";
  cout << a.at(n - 1) << endl;
}