/* Write a c program to calculate the multiplication of following series using goto loop

2^4 * 4^4 * ........ * n^4

*/

#include<stdio.h>
#include<math.h>
void main()
{
   int i=2, n, m = 1;

   printf("Enter the last number: ");
   scanf("%d", &n);

   start:
     m = m * pow(i, 4);
     i = i + 2;

   if(i <= n) goto start;

   printf("Product of the series: %d", m);

}



