#include "main.h"

/**
* infinite_add - adds two numbers
* @n1: the first number
* @n2: the second number
* @r: the buffer to store the result
* @size_r: the buffer size
* Return: a pointer to the result or 0 if it can not be stored
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i, j, k, l, m, n;
    int carry = 0;

    for (i = 0; n1[i] != '\0'; i++)
        ;
    for (j = 0; n2[j] != '\0'; j++)
        ;

    if (i > size_r || j > size_r)
        return (0);

    i--;
    j--;
    m = 0;

    for (k = i, l = j; k >= 0 && l >= 0; k--, l--, m++)
    {
        n = (n1[k] - '0') + (n2[l] - '0') + carry;
        if (n > 9)
        {
            r[m] = (n % 10) + '0';
            carry = 1;
        }
        else
        {
            r[m] = n + '0';
            carry = 0;
        }
    }
    while (k >= 0)
    {
        n = (n1[k] - '0') + carry;
        if (n > 9)
        {
            r[m] = (n % 10) + '0';
            carry = 1;
        }
        else
        {
            r[m] = n + '0';
            carry = 0;
        }
        m++;
        k--;
    }
    while (l >= 0)
    {
        n = (n2[l] - '0') + carry;
        if (n > 9)
        {
            r[m] = (n % 10) + '0';
            carry = 1;
        }
        else
        {
            r[m] = n + '0';
            carry = 0;
        }
        m++;
        l--;
    }
    if (carry == 1)
    {
        r[m] = 1 + '0';
        m++;
    }
    if (m + 1 >= size_r)
        return (0);
    r[m] = '\0';

    for (k = 0, l = m - 1; k < l; k++, l--)
    {
        n = r[k];
        r[k] = r[l];
        r[l] = n;
    }
    return (r);
}
