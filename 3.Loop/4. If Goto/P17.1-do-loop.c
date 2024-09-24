/* Write a c program to calculate the sum of following series using while loop

1 - 2 + 3 - 4 + 5..........n

Using ternary operator:
*/
#include<stdio.h>
void main()
{
   int i=1, n, sum = 0;

   printf("Enter the last number: ");
   scanf("%d", &n);

   while(i <= n)
   {
    sum = i % 2 == 0 ? sum - i : sum + i;
    i++;
   }
   printf("Sum of the series: %d", sum);
}











