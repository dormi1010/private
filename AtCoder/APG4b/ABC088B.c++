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
    int N;
    cin >> N;
    vector<int> vec(N);
    REP(i,N)cin >> vec[i];

    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());

    int A=0,B=0;
    REP(i,N){
        if(i %2==0)A+=vec.at(i);
        else B+=vec.at(i);
    }
//    cout << B << endl;
    cout << max(A,B)-min(A,B);
    return 0;
    }