#include <stdio.h>

int main() {
    int range;
    long long int arr[50]; // Assuming we want to generate up to 40 Fibonacci numbers

    printf("Enter the number range: ");
    scanf("%d", &range);

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < range; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    printf("Fibonacci series is: ");
    for (int i = 0; i < range; i++) {
        printf("%lld ", arr[i]);
    }

    printf("\nFibonacci Ends\n\n");
    return 0;
}
