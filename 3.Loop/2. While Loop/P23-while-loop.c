/* Write a c program to calculate the multiplication of following series using for loop

 5 + 10 + 15 +........ + 50

*/

#include<stdio.h>
#include<math.h>
void main()
{
   int i=5, s = 0;

   while(i <= 50)
   {
     s = s  + i;
     i = i + 5;
   }

   printf("Sum of the series: %d", s);

}
