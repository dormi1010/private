#C++ Algorithm_lib(β)

##幅優先探索(BFS)
グラフの最短経路を求めるのに有効。辺のコストがすべて等しいことが前提になることに注意！
そのほか：二部グラフ判定など。

辞書順最小の探索や、メモ化再帰をしたい場合は深さ優先探索(DFS)のほうが有効
あとはS-G間の距離が大きく枝刈りが必要なケースはDFSのほうがつよい

###基本形

```c++
#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
//幅優先探索（Breaadth-First Search)
//引数はグラフ構造体G（2次元配列）と初期ノードV
//初期ノードと他の全ノードとの距離を配列"vector<ll> dist(G.size())"として返す

//!!!すべての辺のコストが1であることが前提条件!!!

using Graph = vector<vector<int>>;

vector<ll> BFS(Graph G, ll V)
{                                  
    vector<ll> dist(G.size(), -1); //全頂点を-1（未訪問）に初期化
    queue<ll> que;

    dist[V] = 0; //初期ノードをdistとqueueにセット
    que.push(V);

    //BFS開始

    while (!que.empty())
    {
        int v = que.front(); //頂点vを訪問（最初は頂点0）
        que.pop();

        for (int nv : G[v])
        { //頂点vから辿れる全頂点を訪問
            if (dist[nv] != -1)
            { //訪問済頂点は上書きしない
                continue;
            }
            else
            {
                dist[nv] = dist[v] + 1; //頂点nvの原点からの距離を更新
                que.push(nv);
            }
        }
    }
    //BFS完了
    return dist;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    return 0;
}
```
