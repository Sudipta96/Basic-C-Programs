/* Write a c program to calculate the sum of following series using for loop

1^2 + 2^2 + 3^2 + ........ + n^2

*/
#include<stdio.h>
void main()
{
   int i = 1, n, sum = 0;

   printf("Enter the last number: ");
   scanf("%d", &n);

   while(i <= n)
   {
       sum = sum + i*i;
       i++;
   }

   printf("Sum of the series: %d", sum);

}




