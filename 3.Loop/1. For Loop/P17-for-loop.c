/* Write a c program to calculate the sum of following series using while loop

1 - 2 + 3 - 4 + 5..........n

*/
#include<stdio.h>
void main()
{
   int i, n, sum = 0;

   printf("Enter the last number: ");
   scanf("%d", &n);

   while(i <= n)
   {
    if(i % 2 == 0)
    {
     sum = sum - i;
    // printf("- %d ", i);
    }
    else
    {
       sum = sum + i;
       //printf("+ %d ", i);
    }

    i = i + 1;
   }
   printf("Sum of the series: %d", sum);
}










