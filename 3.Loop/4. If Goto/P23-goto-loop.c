/* Write a c program to calculate the multiplication of following series using do loop

 5 + 10 + 15 +........ + 50

*/

#include<stdio.h>
void main()
{
   int i=5, s = 0;

   jump:
     s = s  + i;
     i = i + 5;

   if(i <= 50) goto jump;

   printf("Sum of the series: %d", s);

}
