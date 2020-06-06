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

const int INF = 1e9;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int N, X, Y;
  cin >> N >> X >> Y;
  vector<vector<char>> maze(420, vector<char>(420, '.'));
  vector<vector<int>> dist(420, vector<int>(420, INF));

  REP(i, N) {
    int x, y;
    cin >> x >> y;
    maze.at(x + 205).at(y + 205) = '#';
  }

  queue<Pi> que;
  que.emplace(make_pair(0 + 205, 0 + 205));
  dist[205][205] = 0;
  while (que.size() != 0) {
    Pi v = que.front();
    que.pop();

    if (v.first == X + 205 && v.second == Y + 205) {
      break;
    }

    int dx[6] = {1, 0, -1, 1, -1, 0};
    int dy[6] = {1, 1, 1, 0, 0, -1};
    for (int i = 0; i < 6; i++) {
      // cout << v.first << " " << v.second << endl;
      int nx = v.first + dx[i];
      int ny = v.second + dy[i];
      //  cout << nx << " " << ny << endl;
      if (nx < 0 || 410 < nx || ny < 0 || 410 < ny) {
        //   cout << "exit1" << endl;
        continue;
      }
      if (maze[nx][ny] == '#') {
        //    cout << "exit2" << endl;
        continue;
      }
      if (dist[nx][ny] != INF) {
        //    cout << "exit3" << endl;
        continue;
      }

      que.push(make_pair(nx, ny));
      dist[nx][ny] = dist[v.first][v.second] + 1;
    }
  }
  if (dist[X + 205][Y + 205] == INF)
    cout << -1 << endl;
  else
    cout << dist[X + 205][Y + 205];
  return 0;
}