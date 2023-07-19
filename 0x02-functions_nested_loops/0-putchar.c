#include "main.h"

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

/* _putchar function implementation */
int _putchar(char c)
{
    /* Replace this with your low-level output function */
    /* For example, you can use write(1, &c, 1) for standard output */
    return write(1, &c, 1);
}

