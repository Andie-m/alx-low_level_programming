#include "main.h"

/**
* is_palindrome - checks if a string is a palindrome
* @s: the string to check
* Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int len = 0;

/* find the length of the string */
while (s[len] != '\0')
len++;

/* call the helper function with the string and its length */
return (is_palindrome_helper(s, len));
}

/**
* is_palindrome_helper - checks if a substring is a palindrome
* @s: the substring to check
* @len: the length of the substring
* Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome_helper(char *s, int len)
{
/* base case: empty string or single character */
if (len <= 1)
return (1);

/* compare the first and last characters */
if (s[0] != s[len - 1])
return (0); /* not a palindrome */

/* recursive case: check the substring without the first and last characters */
return (is_palindrome_helper(s + 1, len - 2));
}


