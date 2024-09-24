/* Write a c program to calculate the sum of the numbers which is divisible by 3 between 1 to 100 using while loop
   or,
   3 + 6 + 9 +........ + 99

*/

#include<stdio.h>
void main()
{
   int i= 1, s = 0;

   start:
     s = i % 3 == 0 ? s + i : s;  // Using ternary Operator.
     i++;

   if(i <= 100) goto start;

   printf("Sum of the series: %d", s);

}


