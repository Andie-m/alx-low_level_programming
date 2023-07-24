#include "main.h"

/* A function that checks if a character is a digit */
int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

/* A function that converts a string to an integer */
int _atoi(char *s)
{
    int i, sign, num;

    /* Initialize the sign and the number to 1 and 0 respectively */
    sign = 1;
    num = 0;

    /* Check if the string is empty */
    if (s == NULL || *s == '\0')
        return 0;

    /* Handle the special case of "-2147483648" */
    if (s[0] == '-' && s[1] == '2' && s[2] == '1' && s[3] == '4' &&
        s[4] == '7' && s[5] == '4' && s[6] == '8' && s[7] == '3' &&
        s[8] == '6' && s[9] == '4' && s[10] == '8')
    {
        return -2147483648;
    }

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
            /* Check for integer overflow before adding the digit */
            int digit = s[i] - '0';

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

