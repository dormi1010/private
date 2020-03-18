#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int K, N;
    cin >> N >> K;
    vector<ll> hi(N);
    REP(i, N)
    cin >> hi.at(i);

    sort(hi.begin(), hi.end());

    ll tmp = hi.at(K - 1) - hi.at(0);
    REP(j, N - K + 1)
    {
        ll x = hi.at(K - 1 + j) - hi.at(j);
        if (tmp > x)
            tmp = x;
    }

    cout << tmp << endl;
}