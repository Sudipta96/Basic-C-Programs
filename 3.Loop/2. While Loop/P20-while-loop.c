/* Write a c program to calculate the multiplication of following series using for loop

1/(2^4) * 1/(4^4)........ * 1/(n^4)

*/

#include<stdio.h>
#include<math.h>
void main()
{
   int i=2, n;
   float m = 1;

   printf("Enter the last number: ");
   scanf("%d", &n);

   while(i <= n)
   {
     m = m * 1.0 / pow(i,4);
     i += 2;
   }

   printf("Multiplication of the series: %.10f", m);

}



