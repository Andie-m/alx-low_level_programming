#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all single-digit numbers of base 10
 * starting from 0 without newline, then followed by a newline after printing all the digits.
 * It uses the putchar function to print the digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number; /* Variable to store the digits */

for (number = 0; number <= 9; number++)
putchar(number + '0'); /* Convert number to character and print */

putchar('\n'); /* Print newline */

return (0);
}

