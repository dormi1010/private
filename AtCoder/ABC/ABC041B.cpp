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
    ll A,B,C;
    cin >> A >> B >>C;
    ll MOD = 1000000007;
    cout << ((A*B)%MOD * C)%MOD<< endl; 
    }