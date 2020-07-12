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
  Vl table(100010);
  for (int i = 1; i < 100; i++) {
    for (int j = 1; j < 100; j++) {
      for (int k = 1; k < 100; k++) {
        ll x = (i * i) + (j * j) + (k * k) + (i * j) + (j * k) + (i * k);
        table.at(x)++;
      }
    }
  }

  for (int i = 1; i <= N;i++){
    cout << table.at(i) << endl;
  } }