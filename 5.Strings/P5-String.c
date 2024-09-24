// Compare two string lexicographically

#include<stdio.h>
#include<string.h>

int main()
{
  char s1[50], s2[50];
  int value;
  printf("Enter string 1: ");
  scanf("%s", s1);
  printf("Enter string 2: ");
  scanf("%s", s2);

  value = strcmp(s1, s2);
  if(value == 0)
  {
      printf("%s and %s are eqaul", s1, s2);
  }
  else if(value > 0)
  {
      printf("%s is greater than %s", s1, s2);
  }
  else
  {
      printf("%s is smaller than %s", s1, s2);
  }

  return 0;
}
