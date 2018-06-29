#include "my.h"

void bfs(VERTEX* boom){
	printf("\nBreadth First Search\n\n");
	boom[0].isVisited = true;
	printf("%c ",boom[0].c);
	DataC* q = makeData2(26);
	boom[0].isVisited = true;
	insert(q,&boom[0]);
	VERTEX* v2;
	EDGE* traverser;
	traverser = malloc(sizeof(EDGE));
	v2 = malloc(sizeof(VERTEX));
	
	while (!isEmpty(q)){
 		v2 = delete(q);
		traverser = v2->p;
		while (traverser != NULL){
			if (traverser->v->isVisited != true){
				traverser->v->isVisited = true;
				insert(q,traverser->v);	
				printf("%c ", traverser->v->c);
			}
			traverser=traverser->q;	
		
	    	}   
	
	}
	reset(boom);
	printf("\n\nDone with search and Reset\n\n");
}
