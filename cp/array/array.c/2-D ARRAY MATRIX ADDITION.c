#include <stdio.h>
int main()
{

  int row, column, i, j;
  int m1[30][30], m2[30][30], sum[30][30];
  printf("enter how many rows");
  scanf("%d", &row);
  printf("enter how many column");
  scanf("%d", &column);
  printf("enter the value of m1:\n");
  // for matrix 1 for loop
  for (i = 0; i < row; i++){
    for (j = 0; j < column; j++)
    {
      scanf("%d", &m1[i][j]);
    }
  }
  // for matrix 2 for loop
    printf("enter the value of m2:\n");
      for (i = 0; i < row; i++){
      for (j = 0; j < column; j++){
      scanf("%d", &m2[i][j]);
    }
  }
    // for printing matrix 1
    for (i = 0; i < row; i++){
     for (j = 0; j < column; j++)
      {
        printf("%d\t", m1[i][j]);
      }
  
     }    
    // for printing matrix 2
    for (i = 0; i < row; i++){
     for (j = 0; j < column; j++)
      {
        printf("%d\t", m2[i][j]);
      }
      
    }
    // for addtion of matrix
    for (i = 0; i < row; i++){
    for (j = 0; j < column; j++)
      {
        sum[i][j] = m1[i][j] + m2[i][j];
      }
    }
    // for printing sum
    for (i = 0; i < row; i++){
     for (j = 0; j < column; j++)
      {
        printf("%d\t", sum[i][j]);
      }
      
    printf("\n");
    }
  

}