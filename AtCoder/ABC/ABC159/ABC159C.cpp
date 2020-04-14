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
    int L;
    cin >> L;
    double ans = L * L * L;
    printf("%.16lf", ans / 27);
    return 0;
}