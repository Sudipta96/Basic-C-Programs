// Write a c program to print "ICT" n times -- while loop

#include<stdio.h>
void main()
{
  int i=1, n;

  printf("How many times: ");
  scanf("%d", &n);

  while(i<=n)
  {
    printf("ICT\n");
    i=i+1;
  }
}


