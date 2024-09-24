/* Write a c program to calculate the multiplication of following series using goto loop

 50^2 + 45^2 + 40^2 +........ + 5^2

*/

#include<stdio.h>
void main()
{
   int i=50, s = 0;

   jump:
   {
     s = s + (i*i);
     i = i - 5;
   }
   if(i >= 5) goto jump;

   printf("Product of the series: %d", s);

}

