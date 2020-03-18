#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int N,K,R,S,P;
    char T[100010];
    scanf("%d" "%d",&N,&K);
    scanf("%d" "%d" "%d",&R,&S,&P);
    scanf("%s",T);
    int ans=0;

    for(int i=0;i<K;i++){
        if(T[i]=='r'){
            ans+=P;
        }else if(T[i]=='s'){
            ans+=R;
        }else{
            ans+=S;
        }
    }
    for(int i=K;i<N;i++){
        if(T[i-K]==T[i]){
            ans+=0;
            T[i]='x';
        }else if(T[i]=='r'){
            ans+=P;
        }else if(T[i]=='s'){
            ans+=R;
        }else{
            ans+=S;
    }
    }
    printf("%d",ans);
    return 0;
}
