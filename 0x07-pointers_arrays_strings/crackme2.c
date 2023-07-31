#include <stdio.h>
#include <string.h>
#include <openssl/md5.h>

int main(int argc, char *argv[]) {
char *password = "YOUR_PASSWORD_HERE";
char input[100];


if (strcmp(input, password) == 0) {
printf("Access Granted\n");
} else {
printf("Access Denied\n");
}

return (0);
}

