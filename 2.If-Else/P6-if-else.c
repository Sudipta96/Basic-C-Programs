// Write a c program to display letter grade based on marks.

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
   else if ( marks >= 80)
   {
     printf("You have got A+");
   }
   else if ( marks >= 80)
   {
     printf("You have got A+");
   }
   else if ( marks >= 70)
   {
     printf("You have got A");
   }
   else if ( marks >= 60)
   {
     printf("You have got A-");
   }
   else if ( marks >= 50)
   {
     printf("You have got B");
   }
   else if ( marks >= 40)
   {
     printf("You have got C");
   }
   else if ( marks >= 33)
   {
     printf("You have got D");
   }
   else
   {
     printf("You have got F");
   }
}

