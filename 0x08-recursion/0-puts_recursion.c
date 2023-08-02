#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: nothing
 */
void _puts_recursion(char *s)
{
if (s != '\0') /* check if string is not empty */
{
_putchar(*s); /* print the first character */
_puts_recursion(s + 1); /* call the function recursively with the next */
/* character */
}
else
{
_putchar('\n'); /* print a new line */
}
}
