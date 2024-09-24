#include <stdio.h>

int main() {
    int num;
    long fact = 1;

    printf("Enter any positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.");
    }
    else
        {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %ld", num, fact);
    }
}
