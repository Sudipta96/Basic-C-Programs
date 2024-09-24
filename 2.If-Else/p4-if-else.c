// Write a c program to find out the largest number among three numbers.

#include<stdio.h>
void main()
{
   int n1, n2, n3, largest;

   printf("Enter values for n1, n2 and n3: ");
   scanf("%d %d %d", &n1, &n2, &n3);

   largest = n1;

   if(n2 >= largest)
   {
       largest = n2;
   }
   if(n3 >= largest)
   {
       largest = n3;
   }
   printf("The largest number is : %d", largest);
}
