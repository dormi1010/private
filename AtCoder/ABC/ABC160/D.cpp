#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Graph = vector<vector<int>>;

vector<ll> BFS(Graph G, ll V) {  //引数はグラフ構造体G（2次元配列）と初期ノードV
  vector<ll> dist(G.size(), -1);  //前頂点を-1（未訪問）に初期化
  queue<ll> que;

  dist[V] = 0;  //頂点0を初期ノードとして、初期化
  que.push(V);

  // BFS開始

  while (!que.empty()) {
    int v = que.front();  //頂点vを訪問（最初は頂点0）
    que.pop();

    for (int nv : G[v]) {    //頂点vから辿れる全頂点を訪問
      if (dist[nv] != -1) {  //訪問済頂点は上書きしない
        continue;
      } else {
        dist[nv] = dist[v] + 1;  //頂点nvの原点からの距離を更新
        que.push(nv);
      }
    }
  }
  // BFS完了
  return dist;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N, X, Y;
  cin >> N >> X >> Y;
  Graph G(N);
  vector<int> ans(N, 0);
  REP(i, N - 1) {
    G[i].push_back(i + 1);
    G[i + 1].push_back(i);
  }
  G[X - 1].push_back(Y - 1);
  G[Y - 1].push_back(X - 1);
  REP(i, N) {
    vector<ll> dist = BFS(G, i);
    /*        REP(i, N)
    {
        cout << i << ":" << dist[i] << endl;
    }*/
    REP(j, N) {
      if (dist[j] == -1)
        continue;
      else {
        ans[dist[j]]++;
      }
    }
  }

  for (int i = 1; i < N; i++) {
    if (ans[i] != 0) ans[i] /= 2;
    cout << ans[i] << endl;
  }
}