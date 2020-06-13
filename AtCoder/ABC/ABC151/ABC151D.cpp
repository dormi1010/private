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

int H, W;

int bfs(int x, int y, vector<vector<char>> maze) {
  queue<Pi> que;
  vector<vi> dist(H, vi(W, -1));

  int w[4] = {1, 0, 0, -1};
  int h[4] = {0, 1, -1, 0};

  que.emplace(make_pair(x, y));
  dist.at(x).at(y) = 0;

  while (!que.empty()) {
    Pi now = que.front();
    que.pop();

    REP(i, 4) {
      int nh = now.first + h[i];
      int nw = now.second + w[i];
      if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
      if (maze.at(nh).at(nw) == '#') continue;
      if (dist.at(nh).at(nw) != -1) continue;
      dist.at(nh).at(nw) = dist.at(now.first).at(now.second) + 1;
      que.emplace(make_pair(nh, nw));
    }
  }

  int max_dist = -1;
  REP(i, H) {
    REP(j, W) {
      if (dist.at(i).at(j) > max_dist) {
        max_dist = dist.at(i).at(j);
      }
    }
  }

  /*
for (auto p : dist1) {
  for (auto q : p) cout << q << " ";
  cout << "\n";
}
*/

  return max_dist;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"

  cin >> H >> W;
  vector<vector<char>> maze(H, vector<char>(W, '.'));
  REP(i, H) REP(j, W) cin >> maze.at(i).at(j);

  int max_dist = -1;

  REP(i, H) {
    REP(j, W) {
      if (maze.at(i).at(j) == '#') continue;
      if (max_dist < bfs(i, j, maze)) max_dist = bfs(i, j, maze);
    }
  }

  cout << max_dist << endl;
}
