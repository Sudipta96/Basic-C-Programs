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

   while(i <= n)
   {
     m = m * pow(i, 4);
     i = i + 2;
   }
   printf("Multiplication of the series: %d", m);

}



