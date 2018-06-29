#include "my.h"

void insertEdge(VERTEX* boom,char* holder){
	int i = 0;
	int x = 0;
	int y = 0;
	EDGE* cursor;
	EDGE* newCursor;
	while (holder[i] != '$' ){
		cursor = (EDGE*)malloc(sizeof(EDGE));
		cursor->q= NULL;
	  	x = isThere2(boom,holder[i]);
		y = isThere2(boom,holder[i+1]);
		//printf("We just found the index\n");
	if (boom[x].p == NULL){	
		cursor->v = &boom[y];
		boom[x].p = cursor ;
		i+=2;
		//printf("Place was null so we added %c and %c\n",boom[x].c,boom[x].p->v->c);
	}else{
		//printf("Looking for cursor\n");
		 cursor = boom[x].p;
		//printf("Found a cursor\n");
		while(cursor->q != NULL)
			cursor = cursor->q;
		//printf("Found a null now adding to it\n");
		//boom[x].p = cursor
		newCursor = (EDGE*)malloc(sizeof(EDGE));
		newCursor->q = NULL;
		cursor->q = newCursor;
		newCursor->v = &boom[y];
		i+=2; 
		}
		//printf("%c -> %c\n",boom[x].c, boom[x].p->v->c );
	}	
}
