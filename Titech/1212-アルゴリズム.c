#include <stdio.h>
#include <stdlib.h>

typedef struct cell {
  int element;
  struct cell *next;
} CELL;

CELL *newlist() {
  CELL *p = (CELL *)malloc(sizeof(CELL));
  p->element = -999;
  p->next = NULL; 
  return(p);
}

CELL *insert(int x, CELL *p, CELL *init) {
  CELL *q, *r;

  r = (CELL *)malloc(sizeof(CELL));
  q = p->next;
  p->next = r;
  r->element = x;
  r->next = q;
  return(init);
}

CELL *delete(CELL *p, CELL *init) {
  CELL *q;
  
  q = p->next;
  p->next = q->next;
  free(q);
  return(init);
}


int retrieve(CELL *p, CELL *init) {
  return(p->element);
}

CELL *locate(int x, CELL *init) {
  CELL *p;
  
  p = init;
  while (p->next != NULL) {
    if (p->next->element == x) {
      return(p->next);
    }
    p = p->next;
  }
  return(NULL);
}

int find(int x, CELL *init) {
  CELL *p;
  int i;

  p=init;
  i = 1;
  while (i < x) {
    p = p->next;
    i++;
  }
  return(p->next->element);
}

CELL *next(CELL *p, CELL *init) {
  return(p->next);
}

CELL *previous(CELL *p, CELL *init) {
  CELL *q;

  q = init;
  while (q->next != NULL) {
    if (q == p) {
      return(q);
    }
    q = q->next;
  }
  return (NULL);
}

void printlist(CELL *init) {
  CELL *p;

  printf("( ");
  p = init;
  while (p->next != NULL) {
    printf("%d ", p->next->element);
    p = p->next;
  }
  printf(")\n");
}

int main() {
  CELL *l, *p;

  l = newlist();

  for (int i=0; i<10; i++) {
    l = insert(i, l, l);
  }
  printlist(l);
  
  l = delete(locate(7, l), l);
  printlist(l);
  
  p = locate(3, l);
  printf("%d %d\n", retrieve(previous(p, l), l), retrieve(next(p, l), l));
}
