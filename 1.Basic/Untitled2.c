#include <stdio.h>
void main()
{
  int a, n;
  scanf("%d", &n);
  for(a = 3; a<= n; a=a+3)
  {
      if (a < 8 && a != 6)
      {
          continue;
      }
      printf("%d", a);

  }
}

//if ( a == 5 || a == 12 )



