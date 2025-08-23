#include<stdio.h>
int main()
{
  int arr[30][30],i,j,row,cols;
  printf("enter value of row");
  scanf("%d",&row);
  printf("enter value of column");
  scanf("%d",&cols);
  for(i=0;i<row;i++){ // forows
    for(j=0;j<cols;j++){ // for printing column
      scanf("%d",&arr[i][j]);
    }
  }
    for(i=0;i<row;i++){ // for printing rows
      for(j=0;j<cols;j++){
    printf("%d\t",arr[i][j]);
  }
  printf("\n");
}
}