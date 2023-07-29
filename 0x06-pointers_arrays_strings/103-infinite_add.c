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
int len1 = strlen(n1);
int len2 = strlen(n2);
int carry = 0;
int i = 0;
int sum;
if (size_r <= len1 || size_r <= len2)
return (0);
while (len1 > 0 || len2 > 0)
{
sum = carry;
if (len1 > 0)
{
sum += n1[len1 - 1] - '0';
len1--;
}
if (len2 > 0)
{
sum += n2[len2 - 1] - '0';
len2--;
}
carry = sum / 10;
r[i] = (sum % 10) + '0';
i++;
}
if (carry > 0)
{
r[i] = carry + '0';
i++;
}
r[i] = '\0';
for (int j = 0; j < i / 2; j++)
{
char temp = r[j];
r[j] = r[i - j - 1];
r[i - j - 1] = temp;
}
return (r);
}
