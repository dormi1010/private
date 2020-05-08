#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
using Pi = pair<int,int>;
using Pl = pair<ll,ll>;
 
 //In Contest Submission//
 /*
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long  a,b,c;
    cin >> a>>b>>c;
    if(sqrt(static_cast<long double>(a))+sqrt(static_cast<long double>(b))<sqrt(static_cast<long double>(c)))cout<<"Yes";
    else cout<<"No";
    }
*/

// Accepted Submission //
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    long double eps = 1e-14; // eps は1e-14か1e-15しか通らない

    long double a,b,c;
    cin >> a>>b>>c;

    if(sqrtl(a)+sqrtl(b)+eps<sqrtl(c))cout << "Yes";
    else cout << "No";
    }

//Safest solution//
/*
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll a,b,c;
    cin >> a>>b>>c;
    ll d = (c-a-b);
    if(d>0 && d*d > 4*a*b)cout <<"Yes"<<endl;
    else cout << "No"<<endl;
}
*/