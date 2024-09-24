/* Write a c program to calculate the multiplication of following series using for loop

1*2 + 2*3 + 3*4 + 4*5 + ...... + n*(n+1)

*/

#include<stdio.h>
#include<math.h>
void main()
{
   int i, n, s = 0;

   printf("Enter the last number: ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++)
   {
     s = s  + i * (i + 1);
   }

   printf("Sum of the series: %d", s);

}
