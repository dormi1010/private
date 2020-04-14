#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using Pi = pair<int,int>;
using Pl = pair<ll,ll>;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll N,A,B,X,Y;
    cin >>N >> A >> B;
    X = N / (A+B);
    Y = min(N-((A+B)*X),A);
    cout << A*X + Y << "\n";
    return 0;
    }