#include <stdio.h>
#include <stdlib.h>

#define HEAP_SIZE 100

int heap[HEAP_SIZE] = {};
int mkheap(int list[], int size);
int addheap(int i);
int ckheep(int l);
typedef struct node {
  int data;
  struct node *left;
  struct node *right;
} _node;

int mkheap(int list[], int size){
  int i;
  heap[0] = list[0];
  for (i = 1; i < size; i++){
    heap[i] = list[i];
    addheap(i);
  }
  return 0;
}

int addheap(int i){
  if(i == 0){
    return 0;
  }
  int p = (int)((i-1)/2);
  if (heap[p] <= heap[i]) {
    return 0;
  }else{
    int q = heap[p];
    heap[p] = heap[i];
    heap[i] = q;
    addheap(p);
  }
  return 0;
}

int insert(int x){
  int l = 0;
  int i = 0;
  for(l = 0; heap[l] != 0; l++){
    i ++;
  }
  heap[i] = x;
  addheap(i);
  return 0;
}

int deletemin(){
  int l = 0;
  int i = 0;
  for(l = 0; heap[l] != 0; l++){
    i ++;
  }
  heap[0] = heap[i-1];
  heap[i-1] = 0;
  ckheep(0);
}
int ckheep(int l){
  if(heap[2*l+1] == 0){
    return 0;
  }
  if(heap[l]<heap[2*l+1] && heap[l]<heap[2*l+2]){
    return 0;
  }
  int p = heap[l];
  if(heap[2*l+1]<=heap[2*l+2] || heap[2*l+2] == 0){
    heap[l] = heap[2*l+1];
    heap[2*l+1] = p;
    ckheep(2*l+1);
  }else{
    heap[l] = heap[2*l+2];
    heap[2*l+2] = p;
    ckheep(2*l+2);
  }
}

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

_node *member(int i, _node *p){
  if(p->data == i){
    return p;
  }else if (p->data > i) {
    if (p->left == NULL) {
      return NULL;
    }else{
      member(i, p->left);
    }
  }else{
    if (p->right == NULL) {
      return NULL;
    }else{
      member(i, p->right);
    }
  }
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
_node *minnode(_node *p){
  if(p->left == NULL){
    return p;
  }else{
    minnode(p->left);
  }
}

_node *delete(int i, _node *p){
  _node *q = member(i,p);
  _node *r;
  _node *t = findr(i,p);
  if (q->left == NULL && q->right == NULL) {
    if(q->data < t->data){
      t->left = NULL;
      free(q);
    }else{
      t->right = NULL;
      free(q);
    }
    return p;
  }else if(q->left != NULL && q->right != NULL){
    r = minnode(q->right);
    _node *s = findr(r->data,p);
    q->data = r->data;
    if(s->data == r->data){
    s->right = NULL;
  }else{
    s->left = NULL;
  }
    free(r);
    return p;
  }else if(q->left != NULL && q->right ==NULL){
    if(q->data < t->data){
      t->left = q->left;
      free(q);
    }else{
      t->right = q->left;
      free(q);
    }
    return p;
  }else{
    if(q->data < t->data){
      t->left = q->right;
      free(q);
    }else{
      t->right = q->right;
      free(q);
    }
    return p;
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

int main(){
  int list[] = {2,7,12,10,11,4,4,9,13,7};
  int i = 0;
  mkheap(list,10);
  insert(6);
  insert(8);
  deletemin();
  for (i = 0; heap[i] != 0; i++) {
  printf(" %d", heap[i]);
  }
  printf("\n");

  int temp[] = {6,2,8,1,4,7,10,3,5,9,11};
  _node *l = mktree(temp,11);
  printf("%d\n", member(10,l)->left->data);
  addtree(l,13);
  delete(4,l);
  preorder(l);
  return 0;
}
