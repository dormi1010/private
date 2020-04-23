#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vecl = vector<ll>;
using Graph = vector<vector<int>>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string S;
  cin >> S;
  char flag = 'L';
  ll R = 0;
  ll L = 0;
  ll tmp = 0;
  ll N = S.size();
  Vecl A(N);
  REP(i, N) {
    if (S.at(i) == flag && flag == 'R') {
      R++;
    } else if (S.at(i) == flag && flag == 'L') {
      L++;
    } else if (S.at(i) != flag && flag == 'R') {
      flag == 'L';
      for (int j = tmp; j <= i - 2; i++) A.at(j) == 0;
      L == 1;
      L++;
      if (tmp >= 2) tmp = i - 2;

    } else if (S.at(i) != flag && flag == 'L') {
      flag == 'R';
      if (i == 0) {
        R = 1;
        continue;
      }
      for (int k = tmp + 1; k <= i; k++) A.at(k) == 0;
      if ((R + L) % 2 == 0) {
        A.at(i - 1) = (R + L) / 2;
        A.at(i) = (R + L) / 2;
      } else if (R > L) {
        A.at(i - 1) = (R + L) / 2 + 1;
        A.at(i) = (R + L) / 2;
      } else if (L > R) {
        A.at(i - 1) = (R + L) / 2;
        A.at(i) = (R + L) / 2 + 1;
      }
      R = 1;
      if (tmp >= 2) tmp = i - 2;
    }
  }

  REP(i, N - 1) cout << A.at(i) << " ";
  cout << A.at(N - 1) << endl;
  return 0;
}