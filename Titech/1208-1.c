#include <stdio.h>
#include <stdlib.h>
struct cell {
	int element;
	struct cell *next;
};

struct cell *newlist() {
	struct cell *l = (struct cell *)malloc(sizeof(struct cell));
	l->next == NULL;
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
	while (p != NULL){
		printf("%d\n", p);
		p = p->next;
	}
}
		
int main() {
	struct cell *l = newlist();
	insert(3,NULL, l);
	insert(5, 3, l);
	insert(4, 5, l);
	insert(2, 3, l);
	printlist(l);
	delete(2, l);
	printlist(l);
}