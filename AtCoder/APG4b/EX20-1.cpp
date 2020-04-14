#include <bits/stdc++.h>
using namespace std;

int calc(vector<int> vector,int x,int time){
    if(x==0)return time;
    else{
        time ++;
        return calc(vector,vector[x],time);
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    vec[0]=0;
    for(int i=1;i<N;i++) cin >> vec[i];
    int ans =0;
    for(int j=1;j<N;j++){
        ans =max(calc(vec,j,0),ans);
    }
    cout << ans;
}