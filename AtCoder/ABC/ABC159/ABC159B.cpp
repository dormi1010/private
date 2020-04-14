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
    string S;
    cin >> S;
    int N = S.size();
    //    cout << N << endl;
    string arr1 = S.substr(0, (N - 1) / 2);
    string rev1 = S.substr(0, (N - 1) / 2);
    reverse(rev1.begin(), rev1.end());
    string arr2 = S.substr((N + 3) / 2 - 1);
    string rev2 = S.substr((N + 3) / 2 - 1);
    reverse(rev2.begin(), rev2.end());

    //    cout << arr1 << endl;

    //    cout << arr2 << endl;

    if (arr1 == rev1 && arr1 == rev2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
