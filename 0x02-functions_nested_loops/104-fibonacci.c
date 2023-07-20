#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers and calculates the sum of
 * even-valued terms
 *
 * Each new term in the Fibonacci sequence is generated by
 * adding the previous two terms.
 * The program calculates and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2.
 * It also calculates the sum of even-valued terms in the sequence.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int first = 1;    /* First term of the Fibonacci sequence */
int second = 2;   /* Second term of the Fibonacci sequence */
int next;         /* Variable to store the next term in the sequence */
long sum = 2;     /* Initialize sum with the initial even term 2 */
int count = 2;
/**
*Number of Fibonacci numbers printed so far
*(starting with 1 and 2)
*/

/* Print the first two Fibonacci numbers (1 and 2) */
printf("%d, %d, ", first, second);

/** Loop to generate the remaining Fibonacci numbers and calculate
 * the sum of even terms
 */
while (count < 98)
{
next = first + second;
if (next % 2 == 0)
{
sum += next;
}
first = second;
second = next;
count++;
/* Print the Fibonacci number with a comma and space separator */
if (count < 98)
{
printf("%d, ", next);
}
/* Print the last Fibonacci number without the separator */
else
{
printf("%d\n", next);
}
}

/* Print the sum of even-valued terms in the Fibonacci sequence */
printf("Sum of even-valued terms: %ld\n", sum);

return (0);
}

