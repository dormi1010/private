#include <bits/stdc++.h>
using namespace std;
int s[1000005], a[1000005];
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]), s[i] = 1;
    for (int i = 1; i <= n; i++) {
      for (int j = 2; j * i <= n; j++)
        if (a[i * j] > a[i]) s[i * j] = max(s[i * j], s[i] + 1);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) ans = max(ans, s[i]);
    cout << ans << endl;
  }
}