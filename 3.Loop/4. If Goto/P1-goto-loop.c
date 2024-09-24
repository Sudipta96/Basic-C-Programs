// Write a c program to print "ICT" 10 times -- while loop

#include<stdio.h>
void main()
{
  int i = 1;  // initialize i = 1 at first. it is just another way


  start:
    printf("ICT\n");
    i++;
  if(i <= 10) goto start;
}

