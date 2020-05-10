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
  }

  int cnt[n] = {};
  cnt[1] = 1;
  int key = 0;
  vector<int> v;
  v.push_back(1);

  for (int i = 0;;) {
    cnt[a[i]] += 1;
    v.push_back(a[i]);
    if (cnt[a[i]] == 2) {
      key = a[i];
      break;
    }
    i = a[i] - 1;
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
    cout << v[k] << endl;
  } else {
    ll ans = (k - memory) % (x - memory);
    cout << v[ans + memory] << endl;
  }
  return 0;
}