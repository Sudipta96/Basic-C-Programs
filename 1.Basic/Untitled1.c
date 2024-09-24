#include <stdio.h>
main()
{
  int a = 2, n;
  scanf("%d", &n);
  while ( a <= n )
  {
      printf("%d", a);
      if (a == 8 && a > 6)
      {
          break;
      }
     a = a + 2;
  }
}

//if ( a == 5 || a == 12 )


