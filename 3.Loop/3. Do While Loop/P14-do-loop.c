/* Write a c program to calculate the sum of following series using while loop

1/(2^2) + 1/(4^2) + 1/(6^2) + ........ + 1/(n^2)

*/

#include<stdio.h>
void main()
{
   int i = 2, n;
   float sum = 0;

   printf("Enter the last number: ");
   scanf("%d", &n);

   while(i<= n)
   {
     sum = sum + (float)1 / (i*i);
     i = i + 2;
   }
   printf("Sum of the series: %f", sum);
}







