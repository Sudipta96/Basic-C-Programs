// Write a c program to print 1 to n -- while loop

#include<stdio.h>
void main()
{
  int i=1, n;

  printf("Enter value of n: ");
  scanf("%d", &n);

  while(i <= n)
  {
    printf("%d\n", i);
    i = i + 1;
  }
}
