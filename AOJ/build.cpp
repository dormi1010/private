#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define _GLIBCXX_DEBUG
#define PI 3.141592653589793
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    long long a, b;
    char op;
    cin >> a >> op >> b;
    while (1)
    {
        if (op == '+')
            cout << a + b << endl;
        else if (op == '-')
            cout << a - b << endl;
        else if (op == '*')
            cout << a * b << endl;
        else if (op == '/')
            cout << a / b << endl;
        else
            return 0;
    }
}