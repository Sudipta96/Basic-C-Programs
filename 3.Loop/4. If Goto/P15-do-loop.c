/* Write a c program to calculate the sum of following series using for loop

1.5 + 2.5 + 3.5 + ........ + 50.5

*/
#include<stdio.h>
void main()
{
   float i = 1.5, sum = 0;

   for (i; i <= 50.5; i++)
   {
     sum = sum + i;
   }
   printf("Sum of the series: %.3f", sum);
}








