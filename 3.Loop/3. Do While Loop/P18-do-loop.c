/* Write a c program to calculate the multiplication of following series using for loop

1 * 2 * 3 * ........ * n

*/

#include<stdio.h>
void main()
{
   int i = 1, n, m = 1;

   printf("Enter the last number: ");
   scanf("%d", &n);

   while(i <= n)
   {
     m = m * i;
     i++;
   }
   printf("Multiplication of the series: %d", m);

}


