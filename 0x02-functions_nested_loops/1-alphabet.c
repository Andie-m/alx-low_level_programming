#include "main.h"
#include <stdio.h> /* Include the header file for the putchar function */

void print_alphabet(void) {
char letter;
for (letter = 'a'; letter <= 'z'; letter++) {
putchar(letter); /* Use putchar from stdio.h to print the character */
}
putchar('\n'); /* Print a newline at the end */
}
