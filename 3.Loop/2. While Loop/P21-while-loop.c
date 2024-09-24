/* Write a c program to calculate the multiplication of following series using do loop

1*2 + 2*3 + 3*4 + 4*5 + ...... + n*(n+1)

*/

#include<stdio.h>
#include<math.h>
void main()
{
   int i=1, n, s = 0;

   printf("Enter the last number: ");
   scanf("%d", &n);

   while(i <= n)
   {
     s = s  + i * (i + 1);
     i++;
   }

   printf("Sum of the series: %d", s);

}
