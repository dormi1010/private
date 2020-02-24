#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<stdint.h>
#define N 125
#define ll long long int
//int型は±3*10^4、long型は±2*10^9、ll型は±9*10^18まで定義

//標準ライブラリ<stdlib.h>にはqsort関数が定義されている
//アルゴリズムは処理系依存だが、クイックソートならO(nlogn)、しかし最悪O(n^2)
void qsort(
    void *base, size_t num, size_t size,
    int (*compare)(const void *a, const void *b)
    );
//第四引数は比較関数で、自分で定義しなくてはならない
    //昇順の比較関数(ll 型対応) {1,2,3...10}
int asc(const void *a, const void *b){
    ll *A = (ll *)a;
    ll *B = (ll *)b;
    if (*A > *B) return 1;
    if (*A < *B) return -1;
    return 0;
}
    //降順の比較関数（ll 型対応）{10,9,8...1}
int desc(const void *a, const void *b){
    ll *A = (ll *)a;
    ll *B = (ll *)b;
    if (*A < *B) return 1;
    if (*A > *B) return -1;
    return 0;
}


//確認用グローバルリスト
    ll LIST[N];
    uint64_t xor64(void) {
    static uint64_t x = 88172645463325252ULL;
    x = x ^ (x << 7);
    return x = x ^ (x >> 9);
    }
int makelist(){
    srand((unsigned int)time(NULL));
    for(ll i=0; i < N-1; i++)LIST[i]=xor64();
    return 0;
}

int main(){
    printf("*****qsort*****\n");//ここからqsort用
    ll Q[N];
    makelist();
    memcpy(Q,LIST,N);
    printf("number of list: %d\n",N);
    for(ll i = 0; i < N; i++) printf("%lld ",Q[i]);
    printf("\n");
    qsort(Q, sizeof(Q)/sizeof(*Q),sizeof(*Q),asc);
    for(ll i = 0; i < N; i++) printf("%lld ",Q[i]);          
    printf("\n");//ここまでqsort


    return 0;
}

int bubble_sort(int*);
int marge_sort(int*);
int quick_sort(int*);
int heap_sort(int*);
