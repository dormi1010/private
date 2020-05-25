#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  string S;
  cin >> S;
  for (auto s : S) {
    if (s > '9') {
      cout << "error" << endl;
      return 0;
    }
  }
  int i = stoi(S);
  cout << i * 2 << endl;
}