#include "main.h"
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	print(str);
	/*
	ssize_t len = sizeof(str) - 1;
	ssize_t bytes_written = 0;

	while (bytes_written < len)
	{
		ssize_t result = _putchar(str[bytes_written]);
		if (result == -1)
			return 1; // Error occurred while writing 
		bytes_written += result;
	}
*/
	return 0;
}

/**
 * _putchar - Custom function to write a character to the standard output.
 *
 * @c: The character to be written.
 * Return: On success, returns the character written. On error, -1 is returned.
 */
int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}

