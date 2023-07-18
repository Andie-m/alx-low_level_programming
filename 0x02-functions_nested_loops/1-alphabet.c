#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
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
#ifndef MAIN_H
#define MAIN_H

/* Function prototypes */
int _putchar(char c);
void print_alphabet(void);

#endif /* MAIN_H */

