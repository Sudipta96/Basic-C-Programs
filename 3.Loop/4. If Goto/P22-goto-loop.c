/* Write a c program to calculate the multiplication of following series using while loop

 2 * 4 * 6 * ...... * n

*/

#include <stdio.h>
void main() {
    int i=2, n;
    double m = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    start:
        m = m * i;
        i = i + 2;

    if(i <= n) goto start;
    printf("The product of the series is: %e\n", m); // %e for scientific notation
}



