// Another Approach: Write a c program to find out the smallest number among three numbers.

#include<stdio.h>
void main()
{
   int n1, n2, n3;

   printf("Enter values for n1, n2 and n3: ");
   scanf("%d %d %d", &n1, &n2, &n3);

   if(n1 <= n2 && n1 <= n3)
   {
    printf("The smallest number is : %d", n1);
   }
   else if(n2 <= n1 && n2 <= n3)
   {
    printf("The smallest number is : %d", n2);
   }
   else
   {
    printf("The smallest number is : %d", n3);
   }

}

