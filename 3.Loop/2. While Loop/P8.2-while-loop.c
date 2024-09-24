/* Write a c program to calculate sum and average from 1 to 50 using for loop.
  or find out the sum and average of following series:
   1 + 2 + 3 + 4 + .................. + 50
*/

#include<stdio.h>
void main()
{
   int i=1;
   float sum = 0, avg;

   while(i<=50)
   {
      sum = sum + i;
      i++;
   }
   avg = sum / 50;
   printf("Sum = %.3f", sum);
   printf("\nAverage = %.3f", avg);

}


