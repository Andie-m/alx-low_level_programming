#include "main.h"

/**
 *  A function that prints every other character of a string,
 *  starting with the first character, followed by a new line
 **/
void puts2(char *str)
{
int i, len;

/* Find the length of the string */
len = 0;
while (str[len] != '\0')
{
len++;
}

/* Set the last character to \0 */
str[len] = '\0';

/* Loop through the string and print every other character */
for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
/* Print a new line */
_putchar('\n');
}

