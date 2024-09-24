// Write a c program to print 1 to n -- for loop

#include<stdio.h>
void main()
{
  int i, n;

  printf("Enter value of n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
      printf("%d\n", i);
  }
}
