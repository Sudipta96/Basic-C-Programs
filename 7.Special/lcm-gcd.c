// Write a C program to calculate gcd and lcm of two numbers.

#include <stdio.h>
int main() {
    int num1, num2, a, b, temp, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    a = num1;
    b = num2;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    gcd = a;
    lcm = (num1 * num2) / gcd;
    printf("GCD of %d and %d is %d.\n", num1, num2, gcd);
    printf("LCM of %d and %d is %d.\n", num1, num2, lcm);
    return 0;
}

