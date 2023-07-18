#ifndef MAIN_H
#define MAIN_H

/* Function prototypes */
int _putchar(char c);
void print_alphabet(void);

#endif /* MAIN_H */
#include "main.h"

int main(void)
{
	print_alphabet();
	return 0;
}
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 *               followed by a new line using the _putchar function.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
gcc -o output_filename main.c 1-alphabet.c

