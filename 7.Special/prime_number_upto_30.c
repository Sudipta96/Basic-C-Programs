#include <stdio.h>

void main() {
    int i, j, prime, n = 30;
    printf("Prime numbers up to 30: ");
    for (i = 2; i <= n; i++) {
        prime = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime==1) {
            printf("%d ", i);
        }
    }
}

