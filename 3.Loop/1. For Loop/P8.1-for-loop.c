/* Write a c program to take random integer numbers(n times) using for loop and
   calculate the sum and average of these numbers. */

#include<stdio.h>
void main()
{
   int i, n, num;
   float sum=0, avg;

   printf("How many numbers: ");
   scanf("%d", &n);

   for(i=1; i<=n; i++)
   {
     printf("Enter number %d: ", i);
     scanf("%d", &num);
     sum = sum + num;
   }

   avg = sum / n;
   printf("Sum = %f", sum);
   printf("\nAverage = %f", avg);

}
