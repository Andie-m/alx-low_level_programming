#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: Pointer to the resulting string.
 */
char *cap_string(char *str)
{
int i = 0;

/* Capitalize the first character if it's a lowercase letter */
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;

while (str[i] != '\0')
{
/* Check for word separators and capitalize next letter */
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
i++;
/* Capitalize the next letter if it's a lowercase letter */
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
}
else
{
i++;
}
}

return (str);
}

