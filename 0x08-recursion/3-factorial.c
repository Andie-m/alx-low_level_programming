#include "main.h"

/**
 * factorial - Calculates the factorial of a given number.
 * @n: The number for which the factorial is calculated.
 * Return: Factorial of 'n' or -1 if 'n' is negative.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}

