#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define NUM 101000
int main(){
    int X;
    scanf("%d",&X);

    unsigned i, j;
    unsigned sq_num = (int)sqrt((double)NUM);
    unsigned prime[NUM];

  // 1が立っているものが素数
  // 0が立っているものが合成数（素数ではない）

    for (i = 0; i < NUM; i++) prime[i] = 1;  // 全ての数に1を立てる
    prime[0] = 0;    // 1は素数ではない

    for (i = 1; i < sq_num; i++) {
        if (prime[i] == 1)          // prime[i]が素数なら
          for (j = (i+1); (i+1) * j <= NUM; j++)
            prime[(i+1) * j - 1] = 0;  // 素数の倍数は素数ではない
     }
    for(i = X-1; i<NUM; i++){
        if(prime[i] == 1){
            printf("%d",i+1);
            return 0;
        }
    }
}