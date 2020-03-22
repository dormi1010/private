//ABC136C -Bunld Stairs
/*与えられた数列の各要素から0、または1を引くことで単調非減少数列にできるか？*/
/*要素H_iが要素H_i-1よりも大きければ、H_iから1を引く*/
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
    ios::sync_with_stdio(false); //おまじない
    ll N;
    cin >> N;
    vector<ll> hi(N);
    REP(i, N)
    cin >> hi.at(i); //Input phase end
    REP(j, N)
    {
        if (j == 0)
        {
            hi.at(j)--;
            continue;
        }
        if (hi.at(j) < hi.at(j - 1))
        {
            cout << "No" << endl;
            return 0;
        }
        else if (hi.at(j) > hi.at(j - 1))
        {
            hi.at(j)--;
        }
        else
        {
            continue;
        }
    }
    cout << "Yes" << endl;
}