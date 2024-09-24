/* Write a c program to display following output using goto loop

10, 20, 30, 40, 50. 60, 70, 80, 90. 100

*/
#include<stdio.h>
void main()
{
  int i=10;

  start:
      if( i != 100){
        printf("%d, ",i);
      }
      else
        {
        printf("%d", i);
      }
      i=i+10;
  if(i <= 100) goto start;
}





