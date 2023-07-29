#include <stdio.h>
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
    int i = strlen(n1), j = strlen(n2);
    int k = size_r - 1, carry = 0;

    r[k] = '\0';
    i--; j--; k--;

    while (i >= 0 || j >= 0) {
        int num = carry;
        if (i >= 0) num += n1[i--] - '0';
        if (j >= 0) num += n2[j--] - '0';
        if (num > 9) {
            carry = 1;
            num -= 10;
        } else {
            carry = 0;
        }
        if (k < 0 && (num > 0 || carry > 0)) return (0);
        r[k--] = num + '0';
    }
    if (carry > 0) {
        if (k < 0) return (0);
        r[k--] = carry + '0';
    }
    return (r + k + 1);
}

