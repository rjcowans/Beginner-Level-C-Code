#include "my.h"

void topoSearch(VERTEX* boom){
        int i = 0;
	int size = 0;
	char hold[26];
	for (i = 0; i < 26;i++){
		hold[i] = '$';
	}
	bool foundC = false;
        printf("\nTopological Search\n\n");
        boom[0].isVisited = true;
        //printf("%c ",boom[0].c);
        DataC* stack = makeData(26);
        boom[0].isVisited = true;
        push(stack,&boom[0]);
        VERTEX* v2;
        VERTEX* v3;
        EDGE* traverser;
        traverser = malloc(sizeof(EDGE));
        v2 = malloc(sizeof(VERTEX));
        v3 = malloc(sizeof(VERTEX));
	i = 0;
	size = 26;
        while (!isEmpty2(stack)){
                foundC = false;
                v2 = peak(stack);
                traverser = v2->p;
                        while (traverser != NULL && !foundC ){
                                if (traverser->v->isVisited != true){
                                        traverser->v->isVisited = true;
                                        push(stack,traverser->v);
                                        foundC = true;
                                }else
                                        traverser=traverser->q;
                        }
                        if (traverser == NULL){
			hold[--size]=pop2(stack);		
			}

        }
	size = 26; 
	for (i; i < size; i++){
		if (hold[i] != '$'){
		printf("%c ",hold[i]);
		}
	}
        reset(boom);
        printf("\n\nDone with search and Reset\n\n");

}



