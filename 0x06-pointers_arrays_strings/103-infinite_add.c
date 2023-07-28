#include "main.h"
/**
* infinite_add - adds two numbers
* @n1: the first number
* @n2: the second number
* @r: the buffer to store the result
* @size_r: the buffer size
* Return: a pointer to the result or 0 if it can not be stored
*/

char *infinite_add(char *n1, char *n2,
		char *r, int size_r)
{
int i = strlen(n1) - 1;
int j = strlen(n2) - 1;
int carry = 0;
int k = 0;

while (i >= 0 || j >= 0 || carry > 0) {
if (k >= size_r - 1) {
return (0);
}

int digit1 = i >= 0 ? n1[i] - '0' : 0;
int digit2 = j >= 0 ? n2[j] - '0' : 0;
int sum = digit1 + digit2 + carry;
r[k] = (sum % 10) + '0';
carry = sum / 10;

i--;
j--;
k++;
}

r[k] = '\0';

for (int start = 0, end = k - 1;
start < end; start++, end--)
{
char temp = r[start];
r[start] = r[end];
r[end] = temp;
}

return (r);
}

