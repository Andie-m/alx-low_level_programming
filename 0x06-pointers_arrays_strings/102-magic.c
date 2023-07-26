#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[5] = {98, 1988, 402, 1024, 4096};
int *p = a;

p = p + 2;
_putchar('a');
_putchar('[');
_putchar('2');
_putchar(']');
_putchar(' ');
_putchar('=');
_putchar(' ');
_putchar(*p);
_putchar('\n');

return (0);
}

