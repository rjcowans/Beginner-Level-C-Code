#include "my.h"

bool isThere(char checker,VERTEX* boom){
        int j;
	        
	for (j = 0; j < 50; j++){
              if (checker == boom[j].c){
			return true;
                        }
                }
	return 	false;	
}
