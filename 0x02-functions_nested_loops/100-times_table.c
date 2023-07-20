#include <stdio.h>

void print_times_table(int n) {
if (n < 0 || n > 15) {
return; // Return if n is out of the valid range
}

for (int i = 0; i <= n; i++) {
for (int j = 0; j <= n; j++) {
int result = i * j;

if (j == 0) {
printf("%2d", result); // Left-aligned for single digits
} else {
printf(", %2d", result); // Left-aligned for single digits
}
}
printf("\n");
}
}

int main() {
int n = 12; // Replace this with any value between 0 and 15
print_times_table(n);

return 0;
}

