#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using vi = vector<int>;
using Graph = vector<vi>;

vector<ll> BFS(Graph G, ll V) {
  vector<ll> dist(G.size(), -1);  //全頂点を-1（未訪問）に初期化
  queue<ll> que;

  dist[V] = 0;  //初期ノードをdistとqueueにセット
  que.push(V);

  // BFS開始

  while (!que.empty()) {
    int v = que.front();  //頂点vを訪問（最初は頂点0）
    que.pop();

    for (int nv : G[v]) {    //頂点vから辿れる全頂点を訪問
      if (dist[nv] != -1) {  //訪問済頂点は上書きしない
        continue;
      } else {
        dist[nv] = v;  //頂点nvの原点からの距離を更新
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
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int N, M;
  cin >> N >> M;
  Graph G(N);
  REP(i, M) {
    int a, b;
    cin >> a >> b;
    G.at(a - 1).push_back(b - 1);
    G.at(b - 1).push_back(a - 1);
  }
  Vl Ans = BFS(G, 0);
  for (auto a : Ans) {
    if (a == -1) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  for (int j = 1; j < N; j++) {
    cout << Ans.at(j) + 1 << endl;
  }
}