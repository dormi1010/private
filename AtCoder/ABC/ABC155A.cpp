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
    int A, B, C;
    cin >> A >> B >> C;
    if (A == B && A == C || A != B && A != C && B != C)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}