#include<stdio.h>
int main()
{
  int arr[20][30];
  int row,column;
  printf("enter how many rows");
  scanf("%d",&row);
  printf("enter how manyc cols");
  scanf("%d",&column);
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      printf("%d\t",arr[i][j]);
    }
  
  printf("\n");
}
}