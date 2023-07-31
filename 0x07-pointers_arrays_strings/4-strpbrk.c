#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: the string to search
* @accept: the set of bytes to look for
*
* Return: a pointer to the byte in s that matches one of the bytes in accept,
* or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
char *result = NULL;

while (*s != '\0' && result == NULL)
{
char *a = accept;
while (*a != '\0' && result == NULL)
{
if (*s == *a)
{
result = s;
}
a++;
}
s++;
}
return (result);
}
