/* Write a c program to calculate the sum of following series using for loop

1 + 2 + 3 + ........ + 100

*/

#include<stdio.h>
void main()
{
   int i = 1, sum = 0;

   while(i <= 100)
   {
      sum = sum + i;
      i += 1;
   }
   printf("Sum of the series: %d", sum);

}
