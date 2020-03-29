#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll X, Y, A, B, C;
    cin >> X >> Y >> A >> B >> C;
    vector<ll> p(A);
    vector<ll> q(B);
    vector<ll> r(C);
    REP(i, A)
    cin >> p[i];
    REP(j, B)
    cin >> q[j];
    REP(k, C)
    cin >> r[k];
    sort(p.begin(), p.end(), greater<ll>());
    sort(q.begin(), q.end(), greater<ll>());
    REP(n, X)
    r.push_back(p[n]);
    REP(m, Y)
    r.push_back(q[m]);

    sort(r.begin(), r.end(), greater<ll>());
    //    for (auto a : r)
    //        cout << a << " ";
    ll ans = 0;
    REP(x, X + Y)
    ans += r[x];

    cout << ans << endl;
}