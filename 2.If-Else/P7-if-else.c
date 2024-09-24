// Write a c program to find out lowercase or uppercase letter.

#include<stdio.h>
void main()
{
  char letter;
  printf("Enter a letter: ");
  scanf("%c", &letter);

  if(letter >= 'a' && letter <= 'z')
  {
      printf("%c is a lowercase letter", letter);
  }
  else if(letter >= 'A' && letter <= 'Z')
  {
     printf("%c is a uppercase letter", letter);
  }
  else
  {
   printf("Invalid Input");
  }
}
