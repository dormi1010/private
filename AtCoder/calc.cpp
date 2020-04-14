#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vecl = vector<ll>;
using Graph = vector<vector<int>>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  long long a, b;
  char op;
  cin >> a >> op >> b;
  if (op == '+')
    cout << a + b << endl;
  else if (op == '-')
    cout << a - b << endl;
  else if (op == '*')
    cout << a * b << endl;
  else if (op == '/')
    cout << a / b << " ..." << a % b << endl;
  else if (op == '%')
    cout << a % b << endl;
  else
    cout << "error" << endl;
}