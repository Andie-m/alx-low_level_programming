#include "main.h"
#include <stdlib.h>
#include <time.h>

/* Define a pool of valid characters for the password */
const char VALID_CHARACTERS[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

/**
 * generate_password - Generates a random valid password
 * @password: Pointer to the buffer to store the password
 * @length: Length of the password to be generated
 */
void generate_password(char *password, int length)
{
    int i;
    int pool_size = sizeof(VALID_CHARACTERS) - 1;

    /* Seed the random number generator with the current time */
    srand((unsigned int)time(NULL));

    /* Generate the password */
    for (i = 0; i < length; i++)
    {
        int index = rand() % pool_size;
        password[i] = VALID_CHARACTERS[index];
    }

    /* Null-terminate the password string */
    password[length] = '\0';
}

