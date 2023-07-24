/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 * Return: The converted integer
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    while (*s != '\0')
    {
        if (*s == '-')
            sign = -sign;
        else if (*s >= '0' && *s <= '9')
            result = result * 10 + (*s - '0');
        else if (result != 0)
        {
            /* If a non-digit character is encountered after digits, break the loop */
            break;
        }
        s++;
    }
    return result * sign;
}

