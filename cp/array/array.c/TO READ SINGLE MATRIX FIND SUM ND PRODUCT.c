// C Program to Read a Matrix and find Sum and Product of all elements//
#include <stdio.h>
int main()
{
  int arr[30][30], row, column, i, j, m1[30][30], sum = 0, multi = 1;
  printf("how many rows u wanna add:");
  scanf("%d", &row);

  printf("how mamy columns u wanna add:");
  scanf("%d", &column);

  // to take value of matrix
  printf("enter matrix1->");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < column; j++)
    {
      scanf("%d", &m1[i][j]);
    }
  }
  // to print value of matrix
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < column; j++)
    {
      printf("%d", m1[i][j]);
    }
  }
  // sum
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < column; j++)
    {
      sum[i][j] += m1[i][j];
    }
  }
  // for multipplying
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < column; j++)
    {
      multi[i][j] *= m1[i][j];
    }
  }

  // printing the sum and multiply

  printf("%d %d\t", sum, multi);
}
