#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int len1 = 0, len2 = 0, max_len = 0;
int i, j, k;

while (n1[len1])
len1++;
while (n2[len2])
len2++;

max_len = (len1 > len2) ? len1 : len2;

if (size_r <= max_len + 1)
return (0);

i = len1 - 1;
j = len2 - 1;
k = max_len;

while (i >= 0 || j >= 0 || carry)
{
int sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';

r[k] = (sum % 10) + '0';
carry = sum / 10;

i--;
j--;
k--;
}

if (k != -1)
{
for (i = max_len; i >= 0; i--)
r[i + 1] = r[i];
r[max_len + 1] = '\0';
}

return (r);
}

