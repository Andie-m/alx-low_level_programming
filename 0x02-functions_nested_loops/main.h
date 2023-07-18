#include <stdio.h>

void print(char *data){
   int i;
   for(i = 0; i <= (int)sizeof(data); i++){
       putchar(data[i]);
    }
}
#ifndef MAIN_H
#define MAIN_H

/* Function prototype for print_alphabet */
void print_alphabet(void);

#endif /* MAIN_H */

