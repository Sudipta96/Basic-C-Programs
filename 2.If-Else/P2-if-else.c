// Write a c program to find out even or odd number.

#include<stdio.h>
void main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  if(num % 2 == 0)
  {
    printf("%d is an even number", num);
  }
  else{
    printf("%d is a odd number", num);
  }
}

