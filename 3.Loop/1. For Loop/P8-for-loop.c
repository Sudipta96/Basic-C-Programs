/* Write a c program to calculate the sum of following series using for loop

1 + 2 + 3 + ........ + 100

*/

#include<stdio.h>
void main()
{
   int i = 1, sum = 0;

   for (i; i <= 100; i++)
   {
     sum = sum + i;
   }
   printf("Sum of the series: %d", sum);

}
