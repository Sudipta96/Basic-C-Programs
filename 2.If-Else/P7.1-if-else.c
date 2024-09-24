// Another way : to find out uppercase or lowercase letter.

#include<stdio.h>
void main()
{
  char letter;
  printf("Enter a letter: ");
  scanf("%c", &letter);

  if(letter >= 65 && letter <= 90)
  {
     printf("%c is a uppercase letter", letter);
  }
  else if(letter >= 97 && letter <= 122)
  {
      printf("%c is a lowercase letter", letter);
  }
  else
  {
   printf("Invalid Input");
  }
}

