#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two two-digit
 * numbers in ascending order, separated by ", ".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2; /* Variables to store the numbers */

for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = num1; num2 <= 99; num2++)
{
if (num1 == num2)
continue;

putchar((num1 / 10) + '0'); /* Print tens digit of num1 */
putchar((num1 % 10) + '0'); /* Print units digit of num1 */
putchar(' '); /* Print space */
putchar((num2 / 10) + '0'); /* Print tens digit of num2 */
putchar((num2 % 10) + '0'); /* Print units digit of num2 */

if (num1 < 98 || num2 < 99)
{
putchar(','); /* Print comma */
putchar(' '); /* Print space */
}
}
}

putchar('\n'); /* Print newline */

return (0);
}
