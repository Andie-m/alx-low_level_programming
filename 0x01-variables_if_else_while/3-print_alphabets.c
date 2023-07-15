#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet, followed by the
 * uppercase alphabet, and then a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase;
char uppercase;
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
putchar(lowercase);
}
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
putchar(uppercase);
}
putchar('\n');
return (0);
}
