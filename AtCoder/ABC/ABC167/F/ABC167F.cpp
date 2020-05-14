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
  int N, L = 0;
  int neut_max = 0;
  vector<pair<int, int>> positive;  // 余った'('のほうが多い文字列
  vector<pair<int, int>> negative;  // 余った')'のほうが多い文字列
  cin >> N;
  REP(i, N) {
    string S;
    int l = 0, r = 0;  // r = 余った')'　 l =　余った '('
    cin >> S;
    for (auto s : S) {
      if (s == ')' && l == 0)  // '('が残ってなければ')'は必ず余る
        r++;
      else if (s == ')' && l != 0)  //'('が残ってたら相殺する
        l--;
      else if (s == '(')
        l++;
    }
    if (r < 1)  //余った')'がないやつは最初に並べるのがベスト
      L += l;
    else if (r - l < 0)
      positive.push_back(
          make_pair(r, r - l));  // rが常にLより小さくなるように...
    else if (r - l > 0)
      negative.push_back(make_pair(
          l, r));  // l == 0の文字列が最後に来ないと破滅、それ以外は自由
    else if (r - l == 0 && r > neut_max)  //こいつはpositiveとnegativeの間におく,
                                          //rが最大のやつ以外は空気
      neut_max = r;
  }
  sort(positive.begin(), positive.end());
  sort(negative.begin(), negative.end(), greater<pair<int, int>>());
  for (auto a : positive) {
    if (a.first > L) {
      cout << "No" << endl;  //余った')'が多すぎて誰も相殺できない
      return 0;
    }
    L -= a.second;
  }

  if (neut_max > L) {
    cout << "No" << endl;
    return 0;
  }

  for (auto n : negative) {
    if (n.second > L) {
      cout << "No" << endl;
      return 0;
    }
    L -= n.second;
    L += n.first;
  }

  if (L == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}