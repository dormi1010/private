#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)(n); i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    vector<ll> flag(N + 1);
    vector<ll> Ai(N + 1);
    vector<ll> table(N + 1);
    REP(x, N + 1)
    {
        table.at(x) = (x * (x - 1)) / 2;
    }

    REP(i, N)
    {
        cin >> Ai.at(i);
        flag.at(Ai.at(i))++;
    }

    ll ans = 0;
    REP(j, N + 1)
    {
        ans += table.at(flag.at(j));
    }

    REP(k, N)
    {
        ll tmp = ans - flag.at(Ai.at(k)) + 1;
        cout << tmp << "\n";
    }
}