#include "my.h"

void getStarted(char* holder,VERTEX* boom){
	int i = 0;
	int j = 0;    
	while (holder[i] != '$'){
                char y = holder[i];
        	bool x = isThere(y,boom);
                if (x == true){
                        i++;
                }else{
                        insertVertex(boom,y,j);
                        i++;
                        j++;
                }
        }

}
