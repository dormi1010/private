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

set<int> pool;
set<int> sums;

set<int> primevec(int m, int n) {
  set<int> ret;
  vector<bool> num(n + 1);
  for (int i = 2; i * i < n; i++) {
    if (!num.at(i)) {
      for (int j = 2; i * j <= n; j++) {
        num.at(i * j) = 1;
      }
    }
  }
  for (int i = m; i <= n; i++) {
    if (!num.at(i)) ret.insert(i);
  }
  return ret;
}

template <class T>
void combination(const vector<T>& seed, int target_size,
                 bool (*callback)(const vector<T>&)) {
  vector<int> indices(target_size);
  const int seed_size = seed.size();
  int start_index = 0;
  int size = 0;

  while (size >= 0) {
    for (int i = start_index; i < seed_size; ++i) {
      indices[size++] = i;
      if (size == target_size) {
        vector<T> comb(target_size);
        for (int x = 0; x < target_size; ++x) {
          comb[x] = seed[indices[x]];
        }
        if (callback(comb)) return;
        break;
      }
    }
    --size;
    if (size < 0) break;
    start_index = indices[size] + 1;
  }
}

///////////////// How to use

bool my_callback(const vector<int>& comb) {
  int tmp = 0;
  int n = comb.size();
  for (int i = 0; i < n; ++i) tmp += comb[i];
  pool.insert(tmp);
  return false;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int N;
  cin >> N;
  set<int> prime = primevec(84, 55555);

  vi ans = {2, 13, 31, 73, 83};
  auto itr = prime.begin();
  while (ans.size() < N && itr != prime.end()) {
    bool break_flag = false;
    combination(ans, 4, my_callback);
    for (auto value : sums) {
      if (prime.count(value + *itr)) {
        break_flag = true;
        break;
      }
    }
    if (break_flag || *itr - ans.at(ans.size() - 1) < 10) {
      pool.clear();
      itr = prime.erase(itr);
      continue;
    } else {
      for (auto p : pool) sums.insert(p);
      ans.push_back(*itr);
      ++itr;
    }
  }

  for (auto a : ans) cout << a << " ";
  cout << "\n";

  for (auto a : sums) cout << a << " ";
}