#include <stdio.h>

int main() {
    int num;
    long fact = 1;
    int i = 1;

    printf("Enter any positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.");
        goto end;
    }

loop:
    fact *= i;
    i++;

    if (i <= num) goto loop;

    printf("Factorial of %d = %ld", num, fact);

end:
    return 0;
}
