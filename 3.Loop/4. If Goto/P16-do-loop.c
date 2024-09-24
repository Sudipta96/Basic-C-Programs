/* Write a c program to calculate the sum of following series using for loop

1.5 + 2.0 + 2.5 + ........ + n

*/
#include<stdio.h>
void main()
{
   int n;
   float i = 1.5, sum = 0;

   printf("Enter the last number: ");
   scanf("%d", &n);

   for (i; i <= n; i=i+0.5)
   {
     sum = sum + i;
   }
   printf("Sum of the series: %.3f", sum);
}









