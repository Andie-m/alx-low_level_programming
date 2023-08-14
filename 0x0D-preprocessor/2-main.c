#include <stdlib.h>

int _putchar(char c);
void printFileName(void);

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printFileName();

    return (0);
}

/**
 * printFileName - Prints the name of the current file
 */
void printFileName(void)
{
    int i = 0;

    char filename[] = __FILE__;

    while (filename[i] != '\0')
    {
        _putchar(filename[i]);
        i++;
    }
    _putchar('\n');
}

