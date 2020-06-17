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
void solve() {
  string s;
  int n;
  cin >> s >> n;
  vi b(n);
  vector<Pi> a;
  priority_queue<char> c;
  map<char, int> moji;

  for (auto ch : s) {
    c.push(ch);
    if (!moji.count(ch))
      moji[ch] = 1;
    else
      moji[ch]++;
  }

  REP(i, n) {
    int t;
    cin >> t;
    a.push_back(make_pair(t, i));
  }

  char t[n];
  int count = 0;

  while (!c.empty() && count < n) {
    int zeroc = 0;
    vi idx;
    for (auto x : a) {
      if (x.first == 0) {
        zeroc++;
        idx.push_back(x.second);
      }
    }
    if (zeroc > moji[c.top()]) {
      c.pop();
      continue;
    }
    char ch = c.top();
    // cout << ch << " " << idx.at(0) << endl;
    while (!c.empty() && ch == c.top()) c.pop();

    for (auto q : idx) {
      a.at(q).first = -1;

      for (int x = 0; x < n; x++) {
        if (a.at(x).first <= 0) continue;
        a.at(x).first -= abs(a.at(x).second - q);
        //   cout << a[x].first << " " << a[x].second << endl;
      }
      t[q] = ch;
      moji[ch]--;
      count++;
    }
  }
  for (auto chr : t) cout << chr;
  cout << "\n";
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int t;
  cin >> t;
  REP(i, t) solve();
}