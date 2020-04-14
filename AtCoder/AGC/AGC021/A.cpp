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
    ll N;
    bool flag = true;
    cin >> N;
    if (N < 10)
    {
        cout << N << endl;
        return 0;
    }
    int x = 0;
    while (N >= 10)
    {
        x++;
        if (N % 10 != 9)
            flag = false;
        N = N / 10;
    }
    if (flag == true)
    {
        cout << (x * 9) + N << endl;
        return 0;
    }
    cout << (x * 9) + N - 1 << endl;
    return 0;
}