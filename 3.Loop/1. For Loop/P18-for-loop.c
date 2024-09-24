/* Write a c program to calculate the multiplication of following series using for loop

1 * 2 * 3 * ........ * n

*/

#include<stdio.h>
void main()
{
   int i = 1, n, m = 1;

   printf("Enter the last number: ");
   scanf("%d", &n);

   for (i; i <= n; i++)
   {
     m = m * i;
   }
   printf("Multiplication of the series: %d", m);

}


