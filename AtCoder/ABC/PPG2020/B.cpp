#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int,int>;
using Pl = pair<ll,ll>;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll H,W;
    cin >> H>>W;
    if(H==1 || W==1)cout <<1<<endl;
    else if(H%2==1 && W%2==1)cout << (((H*W)/2)+1)<<endl;
    else cout << (H*W)/2<<endl;
    }