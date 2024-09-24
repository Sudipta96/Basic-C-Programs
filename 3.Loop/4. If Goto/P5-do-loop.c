// Write a c program to print 20 to 40 -- while loop

#include<stdio.h>
void main()
{
  int i=20;

  start:
   printf("%d\n", i);
   i++;
  if(i <= 40) goto start;
}



