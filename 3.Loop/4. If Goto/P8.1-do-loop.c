/* Write a c program to take random integer numbers(n times) using goto loop and
   calculate the sum and average of these numbers. */

#include<stdio.h>
void main()
{
   int i = 1, n, num;
   float sum=0, avg;

   printf("How many numbers: ");
   scanf("%d", &n);

   start:
     printf("Enter number %d: ", i);
     scanf("%d", &num);
     sum = sum + num;
     i++;
   if(i<=n) goto start;

   avg = sum / n;
   printf("Sum = %.3f", sum);
   printf("\nAverage = %.3f", avg);

}
