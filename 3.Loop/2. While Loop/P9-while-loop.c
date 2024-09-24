/* Write a c program to calculate the sum of following series using while loop

1 + 2 + 3 + ........ + n

*/

#include<stdio.h>
void main()
{
   int i = 1, n, sum = 0;

   printf("Enter the last number: ");
   scanf("%d", &n);

   while(i <= n)
   {
       sum = sum + i;
       i++;
   }
   printf("Sum of the series: %d", sum);

}

