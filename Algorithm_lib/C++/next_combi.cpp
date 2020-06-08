#include <bits/stdc++.h>
using namespace std;

set<int> pool;

template <class T>
void combination(const vector<T>& seed, int target_size,
                 bool (*callback)(const vector<T>&, int next), int next_prime) {
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
        if (callback(comb, next_prime)) return;
        break;
      }
    }
    --size;
    if (size < 0) break;
    start_index = indices[size] + 1;
  }
}

///////////////// How to use

bool my_callback(const vector<int>& comb, int next) {
  int tmp = 0;
  int n = comb.size();
  for (int i = 0; i < n; ++i) tmp += comb[i];
  pool.insert(tmp + next);
  return false;
}

int main() {
  vector<int> vals;
  vals.push_back(1);
  vals.push_back(2);
  vals.push_back(3);
  vals.push_back(4);
  vals.push_back(5);

  combination(vals, 3, my_callback, 17);
}