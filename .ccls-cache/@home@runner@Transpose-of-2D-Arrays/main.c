#include <stdio.h>
#include <stdlib.h>

//Printing Transpose of matrix (a), bt this time in a diferent matrix (b)

int main(void) 
{
  int a[4] [5], i, j, b[5] [4], sum = 0;
  printf("Welcome User, Please enter the elements your array:\n");

  for (i = 0; i < 4; i++)
    {
      for (j = 0; j < 5; j++)
        scanf("%d", &a[i][j]);
    }

  printf("\nMatrix is:\n");
  for (i = 0; i < 4; i++)
    {
      for (j = 0; j < 5; j++)
        {
                  printf("%d\t\t", a[i][j]);
        }
      printf("\n");
    }

  printf("\nTranspose of the Matrix is:\n");
  for (i = 0; i < 5; i++)
    {
      for (j = 0; j < 4; j++)
        {
          b[i][j] = a[j][i];
                  printf("%d\t\t", b[i][j]);
        }
      printf("\n");
    }

printf("\n\nEnd of program\n");
  /*sleep(10);
  system("clear");
  printf("Welcome, User\n");*/
  
  return 0;
}