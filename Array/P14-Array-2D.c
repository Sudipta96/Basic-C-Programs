// C program to find the sum of two matrices of order 2*2

#include <stdio.h>
int main()
{
  float a[2][2], b[2][2], result[2][2];

  // Taking input using nested for loop
  printf("Enter elements of 1st matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Enter a%d%d: ", i + 1, j + 1);
      scanf("%f", &a[i][j]);
    }

  // Taking input using nested for loop
  printf("Enter elements of 2nd matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Enter b%d%d: ", i + 1, j + 1);
      scanf("%f", &b[i][j]);
    }

  // adding corresponding elements of two arrays
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      result[i][j] = a[i][j] + b[i][j];
    }
  }

  int ai = 1, bi = 0, ri = 0;
  printf("\nSum Of Matrix:\n\n");
  // adding corresponding elements of two arrays
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      if((ai == 1 || bi == 1 || ri == 1))
      {
          printf("|");
      }

      if(ai != 0 && ai <= 3)
      {
          printf("%.0f", a[i][j]);
          ai++;
      }
      if(ai == 3)
      {

          printf("|\t+\t");
          j = 0;
          bi = 1;
          ai = 0;
      }
      else{
          printf("\t");
      }
      if (bi != 0 && bi <= 3)
      {
          if(bi == 1)
            printf("|");
          printf("%.0f", b[i][j]);
          bi++;
          if(bi == 3)
          {
              printf("|\t=\t");
              ri = 1;
              bi = 0;
              j = 0;
          }
          else{
            printf("\t");
          }
      }

      if (ri != 0 && ri <= 3)
      {
          if(ri == 1)
            printf("|");
          printf("%.0f", result[i][j]);
          ri++;
          if(ri == 3)
          {
              printf("|");
              ai = 1;
              bi = 0;
              ri = 0;
          }
          else{
             printf("\t");
          }
      }
    }
    printf("\n");
  }

  return 0;
}
