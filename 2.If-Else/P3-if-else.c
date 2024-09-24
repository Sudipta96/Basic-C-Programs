// Write a c program to find out the smallest number among three numbers.

#include<stdio.h>
void main()
{
   int n1, n2, n3, smallest;

   printf("Enter values for n1, n2 and n3: ");
   scanf("%d %d %d", &n1, &n2, &n3);

   smallest = n1;

   if(smallest >= n2)
   {
       smallest = n2;
   }
   if(smallest >= n3)
   {
       smallest = n3;
   }
   printf("The smallest number is : %d", smallest);
}
