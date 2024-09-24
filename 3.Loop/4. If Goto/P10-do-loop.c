/* Write a c program to calculate the sum of following series using for loop

2 + 4 + 6 ........ + n

*/

#include<stdio.h>
void main()
{
   int i = 2, n, sum = 0;

   printf("Enter the last number: ");
   scanf("%d", &n);

   while(i <= n)
   {
       sum = sum + i;
       i=i+2;
   }
   printf("Sum of the series: %d", sum);

}


