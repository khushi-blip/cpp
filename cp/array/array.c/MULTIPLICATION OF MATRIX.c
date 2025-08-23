#include<stdio.h>
int main()
{
  int arr[30][40],i,j,row,column,m1[30][30],m2[30][30],multi[30][30];
  printf("enter no of rows:");
  scanf("%d",&row);
  printf("enter no of column:");
  scanf("%d",&column);
  // for loop for rows taking the value
  for(i=0;i<row;i++){
    for(j=0;j<column;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  // for loop for matrix 1
  printf("enter the value of matrix 1");
  for(i=0;i<row;i++){
    for(j=0;j<column;j++){
      scanf("%d",&m1[i][j]);
    }
  }
  // for loop matrix 2
  printf("enter value of matrix 2");
  for(i=0;i<row ;i++){
    for(j=0;j<column;j++){
      scanf("%d",&m2[i][j]);
    }
  }
  // for priting matrix 1
  for (i = 0; i < row; i++){
    for (j = 0; j < column; j++)
     {
       printf("%d", m1[i][j]);
     }
    }
// for priting matrix 2
for (i = 0; i < row; i++){
  for (j = 0; j < column; j++)
   {
     printf("%d\t", m2[i][j]);
   }
  } 
  // for multiplication of matrix
  
  for (i = 0; i < row; i++){
    for (j = 0; j < column; j++){
    for(int k=0;k=column;k++)
      {
        multi[i][j]+= m1[i][k]*m2[k][j];
      }
    }
  } 
    // for printng the multipilaictipm
     // for printing sum
     for (i = 0; i < row; i++){
      for (j = 0; j < column; j++)
       {
         printf("%d\t", multi[i][j]);
       }
      
      printf("\n");
    }
  }
      
    
