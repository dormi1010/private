#include <stdio.h>
#include <stdlib.h>

#define N 8

typedef struct node {  /*構造体の宣言*/
  int data;
  struct node *next;
} _node;

void set(); /*関数の型宣言*/
void addnode(_node *ad, int *list, int size);
void addn(_node *p, _node *q);
int dfs(_node *p, int i);

_node *adj[N];
int visited[N];
void set(){/*構造体を初期化*/
  int i;
  for (i = 0; i < N; i++) {
    adj[i] = (_node*)malloc(sizeof(_node));
    adj[i]->data = i;
    adj[i]->next = NULL;
    visited[i] = 0;
  }
}

void addnode(_node *ad, int *list, int size){ /*隣接リスト作成*/
  _node *p;
  int i;
  for (i = 0; i < size; i++) {
    p = (_node*)malloc(sizeof(_node));
    p->data = *list;
    p->next = NULL;
    addn(ad, p);
    if (i < size-1) {
      ++list;
    }
  }
}
void addn(_node *p, _node *q){
  if (p->next == NULL) {
    p->next = q;
  }else{
    addn(p->next, q);
  }
}

int dfs(_node *p, int i){  /*(1)深さ優先探索*/
  if (visited[i] == 0) {
    printf("%d\n", i);
    visited[i] = 1;
  }else{
    return(0);
  }

  while (p->next != NULL) {
    i = p->next->data;
    dfs(adj[i], i);
    p->next = p->next->next;
  }
 return(0);
}

struct queue {
  _node *front;
  _node *rear;
};

void enqueue(int x, struct queue *q) {
  _node *p;
  p = (_node *)malloc(sizeof(_node));
  if (q->rear != NULL)
    q->rear->next = p;
  q->rear = p;

  if (q->front == NULL)
    q->front = p;

  p->data = x;
  p->next = NULL;
  return;
}

int dequeue(struct queue *q) {
  _node *p;
  int x;
  if (q->front == NULL) {
    printf("error: queue is empty.\n");
    exit(1);
  } else {
    p = q->front;
    x = p->data;
    q->front = q->front->next;
    free(p);
  }
  if (q->front == NULL){
      q->rear = NULL;
    }
  return(x);
}

void bfs(int v){
  _node *p;
  _node *q;
  struct queue *Q;
  Q = (struct queue *)malloc(sizeof(struct queue));
  Q ->front = NULL;
  Q ->rear = NULL;
  visited[v] = 1;
  enqueue(0, Q);
  while (Q->front != NULL) {
    v = dequeue(Q);
    printf("%d\n", v);
    p = adj[v];
    q = p->next;
    while (q != NULL) {
      v = q->data;
      if (visited[v] ==0) {
        visited[v] = 1;
        enqueue(v,Q);
      }
      q = q->next;
    }
  }
  return;
}


int a0[4] = {1,5,6,7};      /*データ部*/
int a1[3] = {3,2,5};
int a2[2] = {3,4};
int a7[1] = {6};

int main(){
  set();
  addnode(adj[0], a0, 4);
  addnode(adj[1], a1, 3);
  addnode(adj[2], a2, 2);
  addnode(adj[7], a7, 1);
  dfs(adj[0], 0);
  bfs(0);
  return(0);
}
