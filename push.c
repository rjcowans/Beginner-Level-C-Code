#include "my.h"

void push(DataC* x, VERTEX* a){
	if (x->top == (x->maxsize-1)){
		printf("DataC is full\n");
		return;
	}
	else{
		x->top += 1;
		x->arr[x->top] = a;
		//printf("%c was pushed in\n",x->arr[x->top]->c);
	}
	return;
}
