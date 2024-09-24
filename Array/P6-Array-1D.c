
#include<stdio.h>
void main()
{
  int num[] = {3, 5, 7, 8, 12, 54, 31}, key, n, i, isfound=0;
  n = 8;
  printf("Enter your number: ");
  scanf("%d", &key);

  for (i=0; i<n; i++)
    {
        if(num[i] == key)
        {
           printf("%d is found in the array", key);
           isfound = 0;
           break;
        }
    }



}
