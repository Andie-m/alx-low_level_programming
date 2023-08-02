#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: Input string.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0') /* Check if the current character is not the null terminator */
	{
		_putchar(*s); /* Print the current character */
		_puts_recursion(s + 1); /* Call the function recursively with the next character */
	}
	else
	{
		_putchar('\n'); /* If we have reached the end of the string, print a new line */
	}
}

