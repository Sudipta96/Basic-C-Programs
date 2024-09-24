/* Write a c program to calculate the multiplication of following series using while loop

 50^2 + 45^2 + 40^2 +........ + 5^2

*/

#include<stdio.h>
void main()
{
   int i=50, s = 0;

   while(i >= 5)
   {
     s = s + (i*i);
     i = i - 5;
   }

   printf("Product of the series: %d", s);

}

