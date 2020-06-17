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
  int N, Q;
  cin >> N >> Q;
  map<int, int> mp[200010];
  vector<Pi> child;
  set<Pi> genious;
  REP(i, N) {
    int a, b;
    cin >> a >> b;
    b--;
    a *= -1;
    child.push_back(make_pair(a, b));
    if (!mp[b].count(a))
      mp[b][a] = 1;
    else
      mp[b][a]++;
  }

  REP(i, 200010) {
    if (mp[i].empty()) continue;
    for (auto x : mp[i]) {
      genious.insert(make_pair(x.first * -1, i));
      break;
    }
  }
  /*
  for (auto p : genious) {
    cout << p.first << " " << p.second << endl;
  }
  */
  REP(i, Q) {
    int c, d;
    cin >> c >> d;
    c--;
    d--;
    int a = child.at(c).first, b = child.at(c).second;

    for (auto x : mp[b]) {
      genious.erase(make_pair(x.first * -1, b));
      break;
    }

    if (mp[b][a] <= 1)
      mp[b].erase(a);
    else
      mp[b][a]--;

    for (auto x : mp[b]) {
      if (mp[b].empty()) break;
      genious.insert(make_pair(x.first * -1, b));
      break;
    }

    for (auto x : mp[d]) {
      if (mp[d].empty()) break;
      genious.erase(make_pair(x.first * -1, d));
      break;
    }

    if (!mp[d].count(a))
      mp[d][a] = 1;
    else
      mp[d][a]++;

    for (auto x : mp[d]) {
      genious.insert(make_pair(x.first * -1, d));
      break;
    }
    child.at(c).second = d;

    for (auto p : genious) {
      cout << p.first << endl;
      break;
    }
  }
}