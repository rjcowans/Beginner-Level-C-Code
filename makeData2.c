#include "my.h"

DataC* makeData2(int size){
	DataC* y;
	y = malloc(sizeof(DataC));
	y->maxsize = size;
	y-> top = -1;
	y-> rear = -1;
	y->arr = calloc(size,sizeof(VERTEX));
	return y;
}
