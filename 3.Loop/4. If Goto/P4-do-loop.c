// Write a c program to print 1 to n -- goto loop

#include<stdio.h>
void main()
{
  int i=1, n;

  printf("Enter value of n: ");
  scanf("%d", &n);

  start:
  {
    printf("%d\n", i);
    i = i + 1;
  }             // it is ok if you use { } in label block
  if(i <= n) goto start;
}
