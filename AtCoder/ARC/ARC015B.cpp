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
    vector<double> MT(N);
    vector<double> mT(N);
    int a=0,b=0,c=0,d=0,e=0,f=0;
    REP(i,N){
        cin >>MT.at(i)>>mT.at(i);
        if(MT[i]>=35)a++;
        else if(MT[i]>=30)b++;
        else if(MT[i]>=25)c++;

        if(mT[i]>=25)d++;

        if(mT[i]<0&&MT[i]>=0)e++;

        if(MT[i]<0)f++;
    }
    printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);
}