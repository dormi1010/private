#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
#define ll long long
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll A, B, C;
    cin >> A >> B >> C;
    ll W = (7 * A) + B;
    ll T = C % W;
    cout << ((C / W) * 7) + min(7, (int)((T + A - 1) / A)) << endl;
}