#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 0 meaning success
 * any other number return error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

