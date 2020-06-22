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
    ll N;
    cin >> N;
    vector<ll> vec(3*N);
    REP(i,3*N)cin >> vec.at(i);
    sort(vec.begin(),vec.end());
    ll ans=0;
    for(size_t j=N;j<3*N;j+=2)ans+=vec.at(j);
    cout << ans << endl;
    }