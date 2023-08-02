#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Input string.
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return is_palindrome_helper(s, len);
}

/**
 * is_palindrome_helper - Recursive helper function for palindrome check.
 * @s: Input string.
 * @len: Length of the string.
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int len)
{
if (len <= 1)
return (1);
if (*s != s[len - 1])
return (0);

return (is_palindrome_helper(s + 1, len - 2));
}
