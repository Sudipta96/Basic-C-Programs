/* Write a c program to calculate the sum of following series using for loop

2 + 4 + 6 ........ + n

*/

#include<stdio.h>
void main()
{
   int i = 2, n, sum = 0;

   printf("Enter the last number: ");
   scanf("%d", &n);

   for (i; i <= n; i=i+2)
   {
     sum = sum + i;
   }
   printf("Sum of the series: %d", sum);

}


