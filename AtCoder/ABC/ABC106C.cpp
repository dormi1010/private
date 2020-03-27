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
    string S;
    ll K;
    cin >> S >> K;
    int a = 0;
    int s = S.size();
    REP(i, s)
    {
        if (S.at(i) != '1')
            break;
        a++;
    }

    if (a >= K)
        cout << "1" << endl;
    else
        cout << S.at(a) << endl;
}