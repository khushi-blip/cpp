//Find the maximum & Minimum from the 2D array//
#include<stdio.h>
int main()
{
  int arr[30][30],m1[30][30],row,column,max[30][30],i,j;
  printf("enter no of rows");
  scanf("%d",&row);
  printf("enter no of columns");
  scanf("%d",&column);
  for(i=0;i<row;i++){
    for(j=0;j<column;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  // inputing value in matrix 1
  printf("enter value in matrix->");
  for(i=0;i<row;i++){
    for(j=0;j<column;j++){
      scanf("%d",&m1[i][j]);
    }
  }
  // printing matrix 1
  for(i=0;i<row;i++){
    for(j=0;j<column;j++){
      printf("%d",m1[i][j]);
    }
  }
  max=arr[0][0];
  for(i=0;i<row;i++){
    for(j=0;j<column;j++){
      if{
      (arr[i][j]>max)
      }
    }
    printf("the max value is %d\n",max);
  }
}



  
