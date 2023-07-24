#include "main.h"

/* A function that prints every other character of a string,
 * starting with the first character, followed by a new line */
void puts2(char *str)
{
int i;

/* Loop through the string and print every other character */
for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
/* Print a new line */
_putchar('\n');
}
