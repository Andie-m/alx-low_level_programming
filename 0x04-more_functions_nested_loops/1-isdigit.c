#include "main.h"

/**
 * _isdigit - Check if a character is a digit (0-9).
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
return (c >= '0' && c <= '9') ? 1 : 0;
}

