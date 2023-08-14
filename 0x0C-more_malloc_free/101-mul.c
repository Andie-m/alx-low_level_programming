#include <unistd.h>
#include <stdlib.h>

/**
 * _strlen - Calculate the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
size_t _strlen(char *s)
{
    size_t len = 0;

    while (*s)
    {
        len++;
        s++;
    }
    return len;
}

/**
 * _isdigit - Check if a character is a digit.
 * @c: The input character.
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _atoi - Convert a string to an integer.
 * @s: The input string.
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int result = 0;

    while (*s)
    {
        if (!_isdigit(*s))
        {
            write(1, "Error\n", 6);
            exit(98);
        }

        result = result * 10 + (*s - '0');
        s++;
    }
    return result;
}

/**
 * _mul - Multiply two positive integers.
 * @num1: The first number.
 * @num2: The second number.
 * Return: The product of num1 and num2.
 */
int _mul(int num1, int num2)
{
    return num1 * num2;
}

/**
 * main - Entry point of the program.
 * @argc: The number of arguments.
 * @argv: An array of argument strings.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;

    if (argc != 3)
    {
        write(1, "Error\n", 6);
        exit(98);
    }

    if (!_isdigit(*argv[1]) || !_isdigit(*argv[2]))
    {
        write(1, "Error\n", 6);
        exit(98);
    }

    num1 = _atoi(argv[1]);
    num2 = _atoi(argv[2]);
    result = _mul(num1, num2);

    if (result == 0)
    {
        putchar('0');
        putchar('\n');
    }
    else
    {
        char buffer[20];
        int i = 0;

        while (result > 0)
        {
            buffer[i++] = result % 10 + '0';
            result /= 10;
        }

        while (i > 0)
        {
            write(1, &buffer[--i], 1);
        }
        write(1, "\n", 1);
    }

    return 0;
}

