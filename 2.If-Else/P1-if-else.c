// Write a c program to find out a number is positive or negative.

#include<stdio.h>
void main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);

  if(num >=0)
  {
    printf("%d is a postive number", num);
  }
  else{
    printf("%d is a negative number", num);
  }
}

