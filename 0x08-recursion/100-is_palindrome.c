#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Input string.
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    if (*s == '\0') /* Base case: Empty string is a palindrome */
        return 1;

    int len = _strlen_recursion(s);
    return check_palindrome(s, len);
}

/**
 * check_palindrome - Recursive helper function for palindrome check.
 * @s: Input string.
 * @len: Length of the string.
 * Return: 1 if palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int len)
{
    if (len <= 1) /* Base case: String with length 1 or 0 is a palindrome */
        return 1;
    if (*s != s[len - 1]) /* Check if the first and last characters are the same */
        return 0;

    return check_palindrome(s + 1, len - 2); /* Check the substring between the first and last characters */
}

