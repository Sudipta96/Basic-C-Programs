/* Write a c program to calculate the sum of following series using for loop

1/2 + 1/4 + 1/6 + ........ + 1/n

*/
#include<stdio.h>
void main()
{
   int i = 2, n;
   float sum = 0;

   printf("Enter the last number: ");
   scanf("%d", &n);

   for (i; i <= n; i+=2)  // i+=2 means i = i + 2 : " += " is a assignment operator.
   {
     sum = sum + (float)1 / i;
   }
   printf("Sum of the series: %.3f", sum);
}






