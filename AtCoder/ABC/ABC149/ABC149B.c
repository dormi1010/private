#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    long long A,B,K;
    scanf("%lld" "%lld" "%lld",&A,&B,&K);
    if(A>=K){
        A = A-K;
    }else if(A+B>=K){
        B = A+B-K;
        A = 0;
    }else{
        A = 0;
        B = 0;
    }
    printf("%lld" " %lld",A,B);
    return 0;
}