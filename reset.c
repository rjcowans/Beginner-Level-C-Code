#include "my.h"

void reset(VERTEX* boom){
	int i = 0;
	while (boom[i].c != '$'){
		boom[i].isVisited = false;
		i++;
	} 
}
