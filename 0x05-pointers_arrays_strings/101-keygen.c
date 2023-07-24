#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* A function that generates a random valid password for the program 101-crackme */
char *generate_password(void)
{
char *password;
int i, sum, random;

/* Allocate memory for the password */
password = malloc(sizeof(char) * 100);
if (password == NULL)
return (NULL);

/* Initialize the random number generator */
srand(time(NULL));

/* Generate characters until the sum is 2772 */
sum = 0;
i = 0;
while (sum < 2772)
{
/* Generate a random character between ' ' and '~' */
random = rand() % ('~' - ' ' + 1) + ' ';
/* Add the character to the password and update the sum */
password[i] = random;
sum += random;
i++;
}
/* Adjust the last character to make the sum exactly 2772 */
password[i - 1] = 2772 - sum + random;
/* Terminate the string */
password[i] = '\0';

return (password);
}

/* A main function that prints a random valid password */
int main(void)
{
char *password;

/* Generate and print the password */
password = generate_password();
if (password == NULL)
return (1);
printf("%s\n", password);

/* Free the memory */
free(password);

return (0);
}
