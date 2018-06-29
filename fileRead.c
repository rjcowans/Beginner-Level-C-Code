#include "my.h"

void fileRead(FILE *file, char* holder){
	int n = 0;
	char x;
	char y;
	while (fscanf(file," %c %c",&x,&y) == 2){
                if (x >= 'A' && x<= 'Z'){
                holder[n++] = x;
                holder[n++] = y;
                }
        }
        fclose(file);

}
