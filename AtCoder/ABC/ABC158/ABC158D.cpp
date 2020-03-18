#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using Pi = pair<int,int>;
using Pl = pair<ll,ll>;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string S;
    cin >> S;
    bool arr = false;
    int Q;
    cin >> Q;
    S.reserve(S.size()+Q+10);
        REP(i,Q){
            int T,F;
            char C;
            cin >> T;
            if(T==1)arr= !arr;
            else{
                cin >> F>> C;
                if(F-1^arr==0) S.insert(S.begin(),C);
                else S.append(1,C);
            }
                            
        }
        if(arr == true)reverse(S.begin(),S.end());
        cout << S << "\n";
        return 0;
    }