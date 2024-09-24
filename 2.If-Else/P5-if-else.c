// Write a c program to display pass or fail based on marks.

#include<stdio.h>
void main()
{
   int marks;
   printf("Enter marks: ");
   scanf("%d", &marks);

   if (marks < 0 || marks > 100)
   {
     printf("Invalid Input");
   }
   else if ( marks >= 33)
   {
     printf("Passed");
   }
   else
   {
     printf("Failed");
   }
}
