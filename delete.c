#include "my.h"

VERTEX* delete(DataC* x){
	int i = 0;
	VERTEX* temp;
	temp = malloc(sizeof(VERTEX));
	if ((x->top == -1) || (x->top) > (x->rear)){
		printf("Queue Underflow");
		temp->c = '$';
		temp->isVisited = false;
		temp->p = NULL;
		return temp;	
	}
	else{
		//printf("Element deleted was %c\n",x->arr[x->top]->c);
		//for(i = 0; i < x->maxsize;i++)
		//x->arr[i] = x->arr[i+1];	 
		x->top = x->top + 1;
		return x->arr[x->top-1];
	}
}	
