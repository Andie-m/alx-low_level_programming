#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the lowercase alphabet in reverse,
 * followed by a new line, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter; /* Variable to store the letters */

for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter); /* Print the current letter */
}

putchar('\n'); /* Print newline */

return (0);
}
