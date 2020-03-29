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
    int A[3][3], N;
    REP(i, 3)
    {
        REP(j, 3)
        cin >> A[i][j];
    }
    cin >> N;
    int B[N];
    REP(k, N)
    {
        cin >> B[k];
        REP(i, 3)
        {
            REP(j, 3)
            {
                if (B[k] == A[i][j])
                    A[i][j] = 0;
            }
        }
    }

    REP(i, 3)
    {
        if (A[i][0] == 0 && A[i][1] == 0 && A[i][2] == 0)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    REP(j, 3)
    {
        if (A[0][j] == 0 && A[1][j] == 0 && A[2][j] == 0)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    if (A[0][0] == 0 && A[1][1] == 0 && A[2][2] == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }

    if (A[0][2] == 0 && A[1][1] == 0 && A[2][0] == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}