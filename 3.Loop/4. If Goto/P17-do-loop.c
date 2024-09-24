/* Write a c program to calculate the sum of following series using for loop

1 - 2 + 3 - 4 + 5..........n

*/
#include<stdio.h>
void main()
{
   int i, n, sum = 0;

   printf("Enter the last number: ");
   scanf("%d", &n);

   for (i=1; i <= n; i++)
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
   }
   printf("\nSum of the series: %d", sum);
}










