// Write a c program to print 10 to 1 -- goto loop

#include<stdio.h>
void main()
{
  int i=10;

  start:
    printf("%d\n", i);
    i--;
  if(i >= 1) goto start;
}




