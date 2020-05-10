#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;

int main() {
  int n;
  ll k;
  cin >> n >> k;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i] = a[i] - 1;
  }

  int cnt[n] = {};
  cnt[0] = 1;
  int key = 0;
  vector<int> v;
  v.push_back(0);

  for (int i = 0;;) {
    cnt[a[i]] += 1;
    v.push_back(a[i]);
    if (cnt[a[i]] == 2) {
      key = a[i];
      break;
    }
    i = a[i];
  }
  v.pop_back();
  int x = v.size();
  int memory = 0;
  for (int i = 0; i < x; i++) {
    if (v.at(i) == key) {
      memory = i;
      break;
    }
  }
  if (k < memory) {
    int next = 0;
    for (int i = 0; i < k; i++) {
      next = a[next];
    }
    cout << next + 1 << endl;
  } else {
    ll ans = (k - memory) % (x - memory);
    cout << v[ans + memory] + 1 << endl;
  }

  return 0;
}