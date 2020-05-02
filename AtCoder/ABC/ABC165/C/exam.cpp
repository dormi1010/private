#include <bits/stdc++.h>
#define int long long
#define _GLIBCXX_DEBUG
using namespace std;
const int MOD = 1000000007;
using Graph = vector<vector<int>>;

int N, M, Q;
vector<int> a(Q);
vector<int> b(Q);
vector<int> c(Q);
vector<int> d(Q);
vector<int> num;
int ans = 0;
int now = 0;
void dfs(int S, int cnt) {
  if (cnt == N) {
    now = 0;
    for (int i = 0; i < Q; i++) {
      if (num.at(b[i]) - num.at(a[i]) == c[i]) now += d[i];
    }
    if (now > ans) ans = now;
  } else {
    for (int i = S; i <= M; i++) {
      num.push_back(i);
      dfs(i, cnt + 1);
      num.pop_back();
    }
  }
}

signed main() {
  cin >> N >> M >> Q;
  a.reserve(Q);
  b.reserve(Q);
  c.reserve(Q);
  d.reserve(Q);
  for (int i = 0; i < Q; i++) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
    a[i]--;
    b[i]--;
  }
  dfs(1, 0);
  cout << ans << endl;
}