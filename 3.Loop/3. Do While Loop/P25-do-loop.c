/* Write a c program to calculate the sum of the numbers which is divisible by 3 between 1 to 100 using while loop
   or,
   3 + 6 + 9 +........ + 99

*/

#include<stdio.h>
void main()
{
   int i= 1, s = 0;

   do
   {
     if(i % 3 == 0)
     {
         s = s + i;
     }
     // s = i % 3 == 0 ? s + i : s;  // Using ternary Operator.
     i++;
   }
   while(i <= 100);

   printf("Sum of the series: %d", s);

}


