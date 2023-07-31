#include <stdio.h>
#include <string.h>

int check_password(const char *password) {
const char *correct_password = "Andie13";

return (strcmp(password, correct_password) == 0);
}

int main() {
char input[100];

printf("Enter the password: ");

int c;
int i = 0;
while ((c = getchar()) != '\n' && i < 99) {
input[i++] = c;
}
input[i] = '\0';

if (check_password(input)) {
const char *message = "Access Granted\n";
for (int i = 0; message[i] != '\0'; i++) {
putchar(message[i]);
}
} else {
const char *message = "Access Denied\n";
for (int i = 0; message[i] != '\0'; i++) {
putchar(message[i]);
}
}

return (0);
}
