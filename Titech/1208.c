#include <stdio.h>

struct cell {
	int element;
	struct cell *next;
};

struct cell *newlist() {
	struct cell *l = (struct cell *)malloc(sizeof(struct cell));
	l->next = NULL;
	return(l);
}

struct cell *insert(int x, struct cell *p, struct cell *init) {
	struct cell *q, *r;
	r = (struct cell *)malloc(sizeof(struct cell));
	if (p == NULL) {
		q = init;
		init = r;
	} else {
		q = p->next;
		p->next = r;
	}
	r->element = x;
	r->next = q;
	return(init);
	}

struct cell *delete(struct cell *p, struct cell *init) {
	struct cell *q;
	if (init == NULL) {
		printf("error: list is empty.\n");
		exit(1);
	}
	if (p == NULL) {
		q = init;
		init = init->next;
		free(q);
	} else {
		if (p->next == NULL) {
			printf("error: no element to remove.\n");
			exit(1);
		} else {
			q = p->next;
			p->next = q->next;
			free(q);
			}
		}
	return(init);
}

void printlist(struct cell *init){
	struct cell *p;
	p = init;
	while (p !== NULL){
		printf("%d\n"p->element);
		p = p->next;
	}

int find(struct cell *p, struct cell *init){
	struct cell *q;
	q = init;
	while(q ! ==NULL){
		if (q->element == p->element)
			printf("%d\n%d\n"q->element,q->next);
			
		else
			q = q->next
		
int main() {
	struct list *l = newlist();
	insert(3, 1, l);
	insert(5, 1, l);
	insert(4, 2, l);
	insert(2, 3, l);
	printlist(l);
	delete(2, l);
	printlist(l);
	find(4,l);
	next(5,l);
	previous(5,l);
}