#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to be searched
 * @needle: The substring to be located
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *start = haystack;
char *substring = needle;

while (*haystack && *substring && (*haystack == *substring))
{
haystack++;
substring++;
}

if (!*substring)
return (start);

haystack = start + 1;
}

return (NULL);
}

