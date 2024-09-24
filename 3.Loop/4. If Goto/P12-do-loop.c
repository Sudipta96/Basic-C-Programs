/* Write a c program to calculate the sum of following series using for loop

2^5 + 4^5 + 6^5 + ........ + n^5

*/
#include<stdio.h>
#include<math.h>
void main()
{
   int i = 2, n, sum = 0;

   printf("Enter the last number: ");
   scanf("%d", &n);

   while(i <= n)
   {
     sum = sum + pow(i,5);
     i += 2;  // i+=2 means i = i + 2 : " += " is a assignment operator.
   }
   printf("Sum of the series: %d", sum);

}





