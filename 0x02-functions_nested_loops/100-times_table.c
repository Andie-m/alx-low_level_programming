/* 100-times_table.c */

#include <stdio.h>

void print_times_table(int n) {
if (n < 0 || n > 15) {
return; /* Return if n is out of the valid range */
}

int i, j, result;
for (i = 0; i <= n; i++) {
for (j = 0; j <= n; j++) {
result = i * j;

if (j == 0) {
printf("%2d", result); /* Left-aligned for single digits */
} else {
printf(", %2d", result); /* Left-aligned for single digits */
}
}
printf("\n");
}
}

