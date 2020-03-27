#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
#define ll long long
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, x = 0, i = 0;
    cin >> n;
    while (x < n)
    {
        x++;
        i = x;
        if (x % 3 == 0)
        {
            cout << " " << x;
        }
        else
        {
            while (i)
            {
                if (i % 10 == 3)
                {
                    cout << " " << x;
                    break;
                }
                i /= 10;
            }
        }
    }
    cout << endl;
    return 0;
}