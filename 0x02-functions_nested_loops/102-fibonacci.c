#include <stdio.h>

int main() {
int fibonacci[50];
fibonacci[0] = 1;
fibonacci[1] = 2;

// Calculate and store the Fibonacci numbers
for (int i = 2; i < 50; i++) {
fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
}

// Print the first 50 Fibonacci numbers
for (int i = 0; i < 49; i++) {
printf("%d, ", fibonacci[i]);
}

// Print the last number with a new line instead of a comma
printf("%d\n", fibonacci[49]);

return 0;
}

