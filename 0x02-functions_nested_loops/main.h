#include <stdio.h>

void print(char *data){
   int i;
   for(i = 0; i < (int)sizeof(data); i++){
       putchar(data[i]);
    }
}
