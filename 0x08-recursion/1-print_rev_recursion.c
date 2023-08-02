#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: the string to be printed
 */
void _print_rev_recursion(char *s)
{
if (s != '\0') /* check if string is not empty */
{
_print_rev_recursion(s + 1); /* call the function recursively with the */
/* next character */
_putchar(*s); /* print the current character */
}
} 
