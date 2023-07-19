#include "main.h"
#include <unistd.h>

/**
 * main - Entry point of the program.
 *
 * Description: This function prints "_putchar", followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    return 0;
}

/**
 * _putchar - Writes a character to the standard output (file descriptor 1).
 *
 * @c: The character to be written.
 *
 * Return: On success, 1. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

