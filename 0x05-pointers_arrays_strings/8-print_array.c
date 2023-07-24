#include "main.h"
#include <stdio.h> /* Add the include for the printf function */

/**
 * print_array - Prints n elements of an array of integers followed by a new line
 * @a: Pointer to the array of integers
 * @n: Number of elements to be printed
 */
void print_array(int *a, int n)
{
    if (n <= 0 || a == NULL)
        return;

    for (int i = 0; i < n; i++)
    {
        _putchar('0' + a[i]); /* Use _putchar to print individual digits */
        if (i < n - 1)
            _putchar(','); /* Print comma after each element except the last one */
        _putchar(' '); /* Print space after each element */
    }
    _putchar('\n'); /* Print a new line after all elements are printed */
}

