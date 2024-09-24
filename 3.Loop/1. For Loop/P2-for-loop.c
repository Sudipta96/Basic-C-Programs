// Write a c program to print "ICT" n times -- for loop

#include<stdio.h>
void main()
{
  int i, n;

  printf("How many times: ");
  scanf("%d", &n);

  for (i=1; i <= n; i++)
  {
      printf("ICT\n");
  }
}


