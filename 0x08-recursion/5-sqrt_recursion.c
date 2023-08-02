#include "main.h"

int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 * Return: The natural square root or -1 if it does not exist.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);

return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Recursive helper function for square root calculation.
 * @n: The number to find the square root of.
 * @i: The current guess for the square root.
 * Return: The natural square root or -1 if it does not exist.
 */
int _sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);

return (_sqrt_helper(n, i + 1));
}

