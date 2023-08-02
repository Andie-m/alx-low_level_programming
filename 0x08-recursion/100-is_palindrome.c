#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);
    return check_palindrome(s, len);
}

/**
 * check_palindrome - Recursive helper function for palindrome check.
 * @s: The string to check.
 * @len: The length of the string.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int len)
{
    if (len <= 1) /* Base case: String with length 1 or 0 is a palindrome */
        return 1;
    if (*s != s[len - 1]) /* Check if the first and last characters are the same */
        return 0;

    return check_palindrome(s + 1, len - 2); /* Check the substring between the first and last characters */
}

