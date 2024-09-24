// Write a c program to print 1 to 5 -- goto loop

#include<stdio.h>
void main()
{
  int i=1;

  start:
   printf("%d\n", i);
   i=i+1;
  if(i<=5) goto start;

}
