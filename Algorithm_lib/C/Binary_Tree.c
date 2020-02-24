#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define INF 10000000
#define int long long 

typedef struct node{
    int num;
    struct node* right;
    struct node* left;
}t_node;

t_node* makenode(int n){
    t_node* p = (t_node *)malloc(sizeof(t_node));
    if(p == NULL){
        fprintf(stderr, "ERROR: %s(%d line)\n", strerror(errno), __LINE__);
        return NULL;
    }
    p->num=n;
    p->right=NULL;
    p->left=NULL;
    return p;
}

t_node* addnode(t_node* p, int n){
    if(p==NULL){
        p = makenode(n);
        return p;
    }else if(p->num >= n){
        t_node* q = makenode(n);
        p->left = q;
        return p;
    }else if(p->num < n){
        t_node* q = makenode(n);
        p->right = q;
        return p;
    }else{
        fprintf(stderr, "ERROR: %s(%d line)\n", strerror(errno), __LINE__);
        return NULL;
    }
}

signed main(){
    return 0;
}