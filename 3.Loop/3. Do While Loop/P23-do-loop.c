/* Write a c program to calculate the multiplication of following series using do loop

 5 + 10 + 15 +........ + 50

*/

#include<stdio.h>
void main()
{
   int i=5, s = 0;

   do
   {
     s = s  + i;
     i = i + 5;
   }
   while(i <= 50);

   printf("Sum of the series: %d", s);

}
