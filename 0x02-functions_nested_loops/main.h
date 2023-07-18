#include <stdio.h>

void print(char [] data){
    for(int i = 0; i< (sizeof(data) / sizeof(data[0])); i++){
         putchar(data[i]);
    }
}
