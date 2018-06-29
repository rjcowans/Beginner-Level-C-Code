#include "my.h"

void baseCase(char* holder,VERTEX* boom){
	int i = 0;
	for (i = 0 ;i < 99; i++){
                holder[i] = '$';
        }
	 for (i = 0;  i < 50; i++){
                boom[i].c = '$';
                boom[i].p = NULL;
		boom[i].isVisited = false;
        }

}
