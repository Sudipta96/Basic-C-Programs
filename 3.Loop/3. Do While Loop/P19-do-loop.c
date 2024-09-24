/* Write a c program to calculate the multiplication of following series using for loop

2^4 * 4^4 * ........ * n^4

*/

#include<stdio.h>
#include<math.h>
void main()
{
   int i=2, n, m = 1;

   printf("Enter the last number: ");
   scanf("%d", &n);

   do
   {
     m = m * pow(i, 4);
     i = i + 2;
   }
   while(i <= n);

   printf("Product of the series: %d", m);

}



