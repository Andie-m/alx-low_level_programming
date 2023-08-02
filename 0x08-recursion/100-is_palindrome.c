#include "main.h"

/**
* is_palindrome - checks if a string is a palindrome
* @s: the string to check
* Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int len = 0, i = 0;

/* find the length of the string */
while (s[len] != '\0')
len++;

/* compare the characters from both ends */
while (i < len / 2)
{
if (s[i] != s[len - i - 1])
return (0); /* not a palindrome */
i++;
}

return (1); /* is a palindrome */
}


