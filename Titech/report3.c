#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *left;
  struct node *right;
} _node;

_node *mktree(int temp[], int size);
void addtree(_node *p1, int data);

_node *mktree(int temp[], int size){
  _node *root = (_node*) malloc(sizeof(_node));
  root->data = temp[0];
  root->left = NULL;
  root->right = NULL;

  int i = 0;
  for(i=1; i<size; i++){
    addtree(root,temp[i]);
  }
  return root;
}

void addtree(_node *p1, int data) {
  _node *p2;

  if (p1->data <=data) {
    if (p1->right == NULL) {
      p2 = (_node*)malloc(sizeof(_node));
      p2->data = data;
      p2->left = NULL;
      p2->right = NULL;
      p1->right = p2;
    }else {
      addtree(p1->right, data);
    }
  }else {
    if (p1->left == NULL) {
      p2 = (_node*) malloc(sizeof(_node));
      p2->data = data;
      p2->left = NULL;
      p2->right = NULL;
      p1->left = p2;
    }else {
      addtree(p1->left, data);
    }
  }
}

void preorder(_node *p){
  if(p == NULL){
    return;
  }
  printf(" %d",p->data);
    preorder(p->left);
    preorder(p->right);
}

void inorder(_node *p){
  if(p == NULL){
    return;
  }
  inorder(p->left);
  printf(" %d",p->data);
  inorder(p->right);
}

void postorder(_node *p){
  if(p == NULL){
    return;
  }
  postorder(p->left);
  postorder(p->right);
  printf(" %d",p->data);
}

int treeh(_node *p){
  if (p == NULL) return 0;
  int l = treeh(p->left);
  int r = treeh(p->right);
  return 1 +(l > r ? l : r);
}

_node *findr(int i, _node *p){
  if(p->data == i){
    printf("error: this node is the root.\n");
    exit(0);
  }else if (p->data > i) {
    if (p->left == NULL) {
      printf("error: there isn't such a node\n");
      exit(0);
    }else if(p->left->data == i){
      return p;
    }else{
      findr(i, p->left);
    }
  }else{
    if (p->right == NULL) {
      printf("error: there isn't such a node\n");
      exit(0);
    }else if(p->right->data == i){
      return p;
    }else{
      findr(i, p->right);
    }
  }
}

_node *find(int i, _node *p){
  if(p->data == i){
    return p;
  }else if (p->data > i) {
    if (p->left == NULL) {
      return NULL;
    }else{
      find(i, p->left);
    }
  }else{
    if (p->right == NULL) {
      return NULL;
    }else{
      find(i, p->right);
    }
  }
}

void checkf(int i, int j, _node *p){
  _node *q = find(j,p);
  if (q == NULL) {
    printf("error: there isn't such a node.\n");
    exit(0);
  }
  if (find(i,q) == NULL){
    printf("NO\n");
  }else{
  printf("YES\n");
  }
}

int main(){
int  list[] = {6,2,8,1,4,7,10,3,5,9,11};
  _node *l = mktree(list,11);
  preorder(l);
  printf(" (preorder)\n");
  inorder(l);
  printf(" (inorder)\n");
  postorder(l);
  printf(" (postorder)\n");
  printf("%d\n", treeh(l));
  printf("%d\n",(findr(10,l)->data));
  checkf(4,2,l);
  checkf(9,4,l);
  checkf(6,13,l);
  return(0);
}
