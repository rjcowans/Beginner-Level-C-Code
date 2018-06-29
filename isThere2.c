#include "my.h"

int isThere2(VERTEX* boom,char checker){
        int j;

        for (j = 0; j < 50; j++){
              if (checker == boom[j].c){
                        return j;
                        }
                }
}
