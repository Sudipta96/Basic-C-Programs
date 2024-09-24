// Write a c program to find out the largest number between two numbers.

#include<stdio.h>
void main()
{
   int n1, n2;

   printf("Enter values for n1, n2: ");
   scanf("%d %d", &n1, &n2);

   if(n1 >= n2)
   {
       printf("The largest number is : %d", n1);
   }
   else
   {
       printf("The largest number is : %d", n2);
   }

}

