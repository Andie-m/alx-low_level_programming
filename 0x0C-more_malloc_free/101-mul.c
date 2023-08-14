#include <stdlib.h>
#include <stdio.h>

/**

*mul - multiplies two positive numbers 
*@num1: the first number 
*@num2: the second number 
*Return: the product of num1 and num2
*/
int mul(char *num1, char *num2)
{
int len1, len2, i, j, carry, sum, prod;
int *result;

/* check if the arguments are valid */
if (num1 == NULL || num2 == NULL)
return (98);
for (i = 0; num1[i]; i++)
if (num1[i] < '0' || num1[i] > '9')
return (98);
for (i = 0; num2[i]; i++)
if (num2[i] < '0' || num2[i] > '9')
return (98);

/* get the lengths of the arguments */
len1 = i;
len2 = j;

/* allocate memory for the result array */
result = malloc(sizeof(int) * (len1 + len2));
if (result == NULL)
return (98);

/* initialize the result array to zero */
for (i = 0; i < len1 + len2; i++)
result[i] = 0;

/* multiply the numbers using long multiplication algorithm */
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
prod = (num1[i] - '0') * (num2[j] - '0');
sum = result[i + j + 1] + prod + carry;
result[i + j + 1] = sum % 10;
carry = sum / 10;
}
result[i + j + 1] += carry;
}

/* print the result array */
i = 0;
while (i < len1 + len2 && result[i] == 0)
i++;
if (i == len1 + len2)
putchar('0');
while (i < len1 + len2)
putchar(result[i++] + '0');
putchar('\n');

/* free the result array */
free(result);

/* return success */
return (0);
}

/** 
*main - entry point 
*@argc: the number of arguments 
*@argv: the arguments 
*Return: 0 on success, 98 on error
*/
int main(int argc, char **argv)
{
int status;

/* check if the number of arguments is correct */
if (argc != 3)
{
printf("Error\n");
exit(98);
}

/* call the mul function and get the status */
status = mul(argv[1], argv[2]);

/* check if there was an error */
if (status == 98)
{
printf("Error\n");
exit(98);
}

/* return success */
return (0);
}

