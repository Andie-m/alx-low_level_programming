#include "main.h"

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
    int i, sign, num;

    /* Initialize the sign and the number to 1 and 0 respectively */
    sign = 1;
    num = 0;

    /* Loop through the string until the end */
    for (i = 0; s[i] != '\0'; i++)
    {
        /* If the character is a minus sign, flip the sign */
        if (s[i] == '-')
        {
            sign *= -1;
        }
        /* If the character is a digit, add it to the number */
        if (is_digit(s[i]))
        {
            int digit = s[i] - '0';

            /* Check for integer overflow before adding the digit */
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10))
            {
                return (sign == 1 ? INT_MAX : INT_MIN);
            }

            num = num * 10 + digit;
            /* If the next character is not a digit, break the loop */
            if (!is_digit(s[i + 1]))
            {
                break;
            }
        }
    }

    /* Return the number times the sign */
    return (num * sign);
}

