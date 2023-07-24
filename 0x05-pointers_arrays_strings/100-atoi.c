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
num = num * 10 + (s[i] - '0');
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
