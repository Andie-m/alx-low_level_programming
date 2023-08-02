#include "main.h"
#include <stdio.h>

/**
* wildcmp - compares two strings and returns 1 if they are identical
* @s1: the first string
* @s2: the second string, which can contain the special character *
* Return: 1 if s1 and s2 are identical, 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);

if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
if (wildcmp(s1, s2 + 1))
return (1);
if (*(s2 + 1) == *s1 || *s1 == '\0')
return (wildcmp(s1, s2 + 1));
return (wildcmp(s1 + 1, s2));
}
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
return (0);
}
