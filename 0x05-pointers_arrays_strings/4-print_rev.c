#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the string
 */
void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}

length--; /* Move back one position to avoid printing the null terminator */

while (length >= 0)
{
_putchar(s[length]);
length--;
}

_putchar('\n');
}

