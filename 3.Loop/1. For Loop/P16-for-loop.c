/* Write a c program to calculate the sum of following series using for loop

1.5 + 2.0 + 2.5 + ........ + n

*/
#include<stdio.h>
void main()
{
   float n;
   float i = 1.5, sum = 0;

   printf("Enter the last number: ");
   scanf("%f", &n);


   while(i <= n)
   {
     sum = sum + i;
     i = i + 0.5;
   }
   printf("Sum of the series: %.3f", sum);
}









