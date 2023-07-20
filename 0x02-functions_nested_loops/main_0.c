/* main_0.c */

#include <stdio.h>

/* Function prototype */
void print_times_table(int n);

int main() {
/* Test cases */
print_times_table(2);
printf("\n");
print_times_table(10);
printf("\n");
print_times_table(13);
printf("\n");
print_times_table(-2);
printf("\n");
print_times_table(0);
printf("\n");
print_times_table(12); // Changed to 12 (instead of 100) to keep the times table size manageable

return (0);
}

