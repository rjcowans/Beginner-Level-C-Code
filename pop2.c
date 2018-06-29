#include "my.h"

char pop2(DataC* x){
        VERTEX* hold;
        hold = malloc(sizeof(VERTEX));
        char y = '$';
	if (x->top == -1){
                printf("Stack is Empty");
        }
        else{
                hold = x->arr[x->top];
                y = hold->c;
                x->top = x->top -1;
             }
        return y;
}
                
