#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_error() {
    printf("Error\n");
    exit(98);
}

void multiply(const char *num1, const char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result_len = len1 + len2;
    int *result = calloc(result_len, sizeof(int));

    if (!result)
        print_error();

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int product = (num1[i] - '0') * (num2[j] - '0');
            int sum = product + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    int start = 0;
    while (start < result_len && result[start] == 0)
        start++;

    if (start == result_len)
        printf("0");
    else {
        for (int i = start; i < result_len; i++)
            printf("%d", result[i]);
    }

    printf("\n");
    free(result);
}

int main(int argc, char *argv[]) {
    if (argc != 3)
        print_error();

    char *num1 = argv[1];
    char *num2 = argv[2];

    for (int i = 0; num1[i] != '\0'; i++) {
        if (num1[i] < '0' || num1[i] > '9')
            print_error();
    }

    for (int i = 0; num2[i] != '\0'; i++) {
        if (num2[i] < '0' || num2[i] > '9')
            print_error();
    }

    multiply(num1, num2);

    return 0;
}

