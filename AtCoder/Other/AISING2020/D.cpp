/*
//一生サンプル2が合わなかったけど、3時間のデバッグの末、
//89行目の(count-1)の符号が逆だったことに気づいたのでここに戒めとして記します
*/

#include <bits/stdc++.h>
#define REP(i, n) for (long long i = 0; i < (long long)n; i++)
//#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int, int>;
using Pl = pair<ll, ll>;
using Vl = vector<ll>;
using vi = vector<int>;
using Graph = vector<vi>;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  // std::cout << std::fixed << std::setprecision(15); //"for float-base
  // problem"
  int N;
  string S;
  cin >> N >> S;
  int count = 0;
  for (auto x : S) {
    if (x == '1') count++;
  }
  if (count == 0) {  //コーナーケース（0除算回避）
    REP(i, N) cout << 1 << endl;
    return 0;
  }
  vi modplus(N), mod(N), modminus(N);
  if (count == 1) {  //コーナーケース（0除算回避）
    REP(i, N) {
      if (S.at(i) == '1')
        cout << 0 << endl;
      else if (i != N - 1)
        cout << 1 << endl;
      else {
        cout << 2 << endl;
      }
    }
    return 0;
  }
  //各桁についてMODを取っておく
  modplus.at(N - 1) = 1 % (count + 1);
  mod.at(N - 1) = 1 % (count);
  modminus.at(N - 1) = 1 % (count - 1);
  for (int i = N - 1; i > 0; i--) {
    modplus.at(i - 1) = (modplus.at(i) * 2) % (count + 1);
    mod.at(i - 1) = (mod.at(i) * 2) % (count);
    modminus.at(i - 1) = (modminus.at(i) * 2) % (count - 1);
  }
  // for (auto x : modminus) cout << x << " ";
  // cout << "\n";
  int tm = 0, t = 0, tp = 0;
  //初期状態のMODを計算
  REP(i, N) {
    if (S.at(i) == '0') {
      continue;
    } else {
      tp = (tp + modplus[i]) % (count + 1);
      t = (t + mod[i]) % count;
      tm = (tm + modminus[i]) % (count - 1);
    }
  }
  // cout << tm << " " << t << " " << tp << endl;
  // 1回操作した後はN以下になるので前計算しとく
  vi table(200010);
  for (int bit = 0; bit <= 200000; ++bit) {
    int sum = 0;
    REP(i, 18) {
      if (bit & (1 << i)) {
        sum++;
      }
    }
    table.at(bit) = sum;
  }
  //本処理　各桁ごとに再計算
  int ans, num;
  REP(i, N) {
    ans = 1, num = 0;
    if (S.at(i) == '0') {
      // cout << modplus[i] << endl;
      num = (tp + modplus[i]) % (count + 1);
      // cout << num << " " << count + 1 << " ";
    } else {
      num = ((count - 1) + tm - modminus[i]) % (count - 1);
      // cout << num << " " << count-1 << " ";
    }

    while (num) {
      num = num % table.at(num);
      // cout << num << " ";
      ans++;
    }

    cout << ans << endl;
  }

  // cout << bitset<18>(num) << endl;
}