// Write a c program to find out a vowel or consonant.

#include<stdio.h>
void main()
{
   char ch;
   printf("Enter a letter: ");
   scanf("%c", &ch);

   if(ch == 'A' || ch == 'a' ||
      ch == 'E' || ch == 'e' ||
      ch == 'I' || ch == 'i' ||
      ch == 'O' || ch == 'o' ||
      ch == 'U' || ch == 'u')
   {
    printf("%c is a vowel", ch);
   }
   else if((ch >= 'a' && ch <= 'z') || ( ch >= 'A' && ch <= 'Z'))
   {
     printf("%c is a consonant", ch);
   }
    else
    {
      printf("Invalid Input");
    }
}
