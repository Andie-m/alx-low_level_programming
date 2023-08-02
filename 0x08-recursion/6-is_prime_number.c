#include "main.h"

/**
 * evaluate_num - recursion loop
 * @num: num
 * @iterator: number to iterate
 * Return: return 1 or 0
 */
int evaluate_num(int num, int iterator)
{
if (iterator == num - 1)
{
return (1);
}
else if (num % iterator == 0)
{
return (0);
}
else
{
return (evaluate_num(num, iterator + 1)); / recursive call /
}
}

/**
* is_prime_number - returns 1 if the input integer is a prime number
* @n: integer
* Return: 1 if n is prime, or 0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1) / base condition /
{
return (0);
}
else
{
return (evaluate_num(n, 2)); / call the helper function /
}
}
