#include "my.h"

void pop(DataC* x){
	VERTEX* hold;
	hold = malloc(sizeof(VERTEX));
	if (x->top == -1){
		printf("Stack is Empty");	 
	}
	else{
		hold = x->arr[x->top];
		//printf("poped vertex is %c\n", hold->c);
		x->top = x->top -1; 		
	}
	return;
}
