#include "my.h"

DataC* makeData(int size){
	DataC* x;
	x = malloc(sizeof(DataC));
	x->arr = calloc(size,sizeof(VERTEX));
	x->maxsize = size;
	x->top = -1;
	return x;
}
