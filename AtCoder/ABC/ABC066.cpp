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
    int n;
    cin >> n;
    vector<ll> Ai(n);
    vector<ll> B;
    vector<ll> arr;
    vector<ll> rev;
    REP(i, n)
    {
        cin >> Ai.at(i);
        if (i % 2 == 0)
        {
            arr.push_back(Ai.at(i));
        }
        else
        {
            rev.push_back(Ai.at(i));
        }
    }
    reverse(rev.begin(), rev.end());
    for (int x : rev)
    {
        B.push_back(x);
    }
    for (int y : arr)
    {
        B.push_back(y);
    }
    if (n % 2 == 1)
    {
        reverse(B.begin(), B.end());
    }
    REP(k, n - 1)
    {
        cout << B[k] << " ";
    }

    cout << B[n - 1] << endl;
}