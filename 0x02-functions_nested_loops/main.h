#include <stdio.h>

void print(char  data[]){
    for(int i = 0; i<sizeof(data); i++){
         putchar(data[i]);
    }
}
