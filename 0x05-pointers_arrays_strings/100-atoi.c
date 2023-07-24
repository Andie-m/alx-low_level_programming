#include "main.h"
#include <limits.h>

/**
 * is_digit - A function that checks if a character is a digit.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _atoi - A function that converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer representation of the string.
 */
int _atoi(char *s)
{
    int i = 0, sign = 1, num = 0;

    /* Check if the string is empty */
    if (s == NULL || *s == '\0')
        return 0;

    /* Skip leading white spaces */
    while (s[i] == ' ')
        i++;

    /* Check for a sign */
    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    /* Loop through the string until the end */
    while (s[i] != '\0')
    {
        /* If the character is not a digit, break the loop */
        if (!is_digit(s[i]))
            break;

        int digit = s[i] - '0';

        /* Check for integer overflow before adding the digit */
        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10))
        {
            return (sign == 1 ? INT_MAX : INT_MIN);
        }

        num = num * 10 + digit;
        i++;
    }

    /* Return the number times the sign */
    return (num * sign);
}

