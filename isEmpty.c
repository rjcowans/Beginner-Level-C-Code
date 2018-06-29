#include "my.h"

bool isEmpty(DataC* x){
	bool y = false;
	//printf("I am here in function\n");	
	if  (x->rear+1 == x->top || (x->top + x->maxsize-1 == x->rear)){
		y= true;
		//printf("I am false\n");
	}
	else{
	y = false;
	//printf("I am true\n");
	}
	return y;
}
