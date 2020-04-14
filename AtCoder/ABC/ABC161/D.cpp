#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vecl = vector<ll>;
using Graph = vector<vector<int>>;
//#1 想定解（queueを用いた解法）

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll K;
  cin >> K;
  ll num = 0;
  queue<ll> que;
  REP(i, 9) que.push(i + 1);
  while (K > 0) {
    num = que.front();
    //    cout << num << " ";
    if (num % 10 != 0) que.push(10 * num + num % 10 - 1);
    que.push(10 * num + num % 10);
    if (num % 10 != 9) que.push(10 * num + num % 10 + 1);
    que.pop();
    K--;
  }
  cout << num << endl;
  return 0;
}

/*
// #2 DFSを用いた解法
vector<ll> LIST;

void dfs(ll num, ll k) {
  if (k == 0) {
    LIST.push_back(num);
    return;
  } else if (num == 0) {
    REP(i, 10) dfs(i * pow(10, k - 1), k - 1);
    return;
  }
  ll p = pow(10, k);
  ll x = (num / p) % 10;
  if (x != 0) dfs(num + (x - 1) * pow(10, k - 1), k - 1);
  dfs(num + x * pow(10, k - 1), k - 1);
  if (x != 9) dfs(num + (x + 1) * pow(10, k - 1), k - 1);
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll K;
  cin >> K;
  //  REP(i, 8) LIST.push_back(i + 2);
  dfs(0, 10);
  sort(LIST.begin(), LIST.end());
  // REP(n, 30) cout << LIST.at(n) << " ";
  cout << LIST.at(K) << endl;
  return 0;
}
*/

/*
//#3 BFSを用いた解法
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll K;
  cin >> K;

  return 0;
}
*/