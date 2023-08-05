#include "main.h"
#include <stdio.h>

/**
 * _strspn - Calculates the length of the initial segment of s which consists
 * entirely of characters in accept.
 * @s: The string to be searched
 * @accept: The string containing the characters to match
 *
 * Return: The number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int match;

while (*s)
{
match = 0;
while (*accept)
{
if (*s == *accept)
{
count++;
match = 1;
break;
}
accept++;
}
if (!match)
break;
s++;
accept = accept - count;
}

return (count);
}

