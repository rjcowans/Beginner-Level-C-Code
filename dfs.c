#include "my.h"

void dfs(VERTEX* boom){
	bool foundC = false;
	printf("\nDeapth First Search\n\n");
        boom[0].isVisited = true;
        printf("%c ",boom[0].c);
        DataC* stack = makeData(26);
        boom[0].isVisited = true;
        push(stack,&boom[0]);
        VERTEX* v2;
	VERTEX* v3;
        EDGE* traverser;
        traverser = malloc(sizeof(EDGE));
        v2 = malloc(sizeof(VERTEX));
	v3 = malloc(sizeof(VERTEX));
	while (!isEmpty2(stack)){
		foundC = false;
		v2 = peak(stack);
		traverser = v2->p;
                	while (traverser != NULL && !foundC ){
                        	if (traverser->v->isVisited != true){
                                	traverser->v->isVisited = true;
                                	push(stack,traverser->v);
                                	printf("%c ", traverser->v->c);
					foundC = true;
                        	}else
					traverser=traverser->q;
			}
	 		if (traverser == NULL)
			pop(stack);
			  		
        
	}
        reset(boom);
        printf("\n\nDone with search and Reset\n\n");

}
                                               
