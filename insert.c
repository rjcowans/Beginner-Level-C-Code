#include "my.h"

void insert(DataC* x,VERTEX* a){
		if (x->rear == (x->maxsize-1))
			printf("Queue Overflow\n");
		else {
			if (x->top == -1)
				x->top=0;
			x->rear += 1;
			x->arr[x->rear] = a;
			//printf("%c was inserted in queue\n",x->arr[x->rear]->c);
	}
	return;
}  
