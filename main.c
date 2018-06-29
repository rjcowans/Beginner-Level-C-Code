#include "my.h"


int main(int argc,char *argv[]){
	FILE *file;
	file = fopen (argv[1],"r");
	char holder[100];
	VERTEX boom[50];
	baseCase(holder,boom);
	int i = 0;
	fileRead(file,holder);
	while (holder[i] != '$'){
		printf("%c ", holder[i++]);
	}  	
	printf("\n");
	getStarted(holder,boom);
	insertEdge(boom,holder); 		
	displayList(boom);
	printf("\n");
	bfs(boom);
	dfs(boom);
	topoSearch(boom);
	return 0;
}

