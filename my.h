#ifndef MY_H
#define MY_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct{
	char c;
	bool isVisited;
	struct EDGETAG* p;
} VERTEX;

typedef struct EDGETAG {
	VERTEX* v;
	struct EDGETAG* q;
}EDGE;

typedef struct{
	int maxsize;
	VERTEX** arr;
	int top;
	int rear;
} DataC;

bool isThere(char checker, VERTEX* boom);
void insertVertex(VERTEX* boom, char x, int ph);
void insertEdge(VERTEX* boom, char* holder);
int isThere2(VERTEX*  boom, char holder);
void displayList(VERTEX* boom);
void baseCase(char* holder, VERTEX* boom);
DataC* makeData(int size);
DataC* makeData2(int size);
void push(DataC* x,VERTEX* a);
void pop(DataC* x);
void insert(DataC* x,VERTEX* a);
VERTEX* delete(DataC* x);
bool isEmpty(DataC* c);
void getStarted(char* holder,VERTEX* boom);
void fileRead(FILE *file,char* holder);
VERTEX* peak(DataC* x);
void bfs(VERTEX* boom);
void reset(VERTEX* boom);
bool isEmpty2(DataC* x);
void topoSearch(VERTEX* boom);
char pop2(DataC* x);
#endif
