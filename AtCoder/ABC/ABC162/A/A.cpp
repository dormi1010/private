#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using Graph = vector<vector<int>>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string N;
  cin >> N;
  if (N.at(1) == '7' || N.at(0) == '7' || N.at(2) == '7')
    cout << "Yes";
  else
    cout << "No" << endl;
}