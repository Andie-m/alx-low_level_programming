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
/* base case: both strings are empty */
if (*s1 == '\0' && *s2 == '\0')
return (1);

/* if s2 contains *, check the next characters */
if (*s2 == '*')
{
/* if the next character of s2 is also *, skip it */
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));

/* if the next character of s2 matches s1, or s1 is empty, check the rest of the strings */
if (*(s2 + 1) == *s1 || *s1 == '\0')
return (wildcmp(s1, s2 + 1));

/* otherwise, move to the next character of s1 */
return (wildcmp(s1 + 1, s2));
}

/* if the current characters of s1 and s2 match, check the rest of the strings */
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

/* otherwise, the strings are not identical */
return (0);
}


