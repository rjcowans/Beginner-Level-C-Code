#include "my.h"

void displayList(VERTEX* boom){
	int i = 0;
	VERTEX cursor;
        EDGE* traverser;
	printf("Adjencent List\n");
	while (boom[i].c != '$'){
		printf("%c: ",boom[i].c);
		cursor = boom[i];
                traverser = boom[i].p;
		while (traverser != NULL){
			printf("-> ");
			printf("%c ", traverser->v->c);
			//cursor.p = cursor.p->q;
                        traverser = traverser->q;
		}
		i++;
		printf("\n");	
	}
}
