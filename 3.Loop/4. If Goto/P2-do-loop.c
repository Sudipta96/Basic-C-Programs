// Write a c program to print "ICT" n times -- goto loop

#include<stdio.h>
void main()
{
  int i=1, n;

  printf("How many times: ");
  scanf("%d", &n);

  start:
    printf("ICT\n");
    i=i+1;
  if(i<=n) goto start;
}


