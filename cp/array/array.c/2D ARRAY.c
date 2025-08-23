#include<stdio.h>
int main()
{
  int arr[30][3]={1,2,3,4,5,6,2,42,4},i,j;
  
  for(i=0;i<3;i++){
    for(j=0;j<2;j++){
      printf("%d\t",arr[i][j]);
    }
    printf("\n\n");
  }
  
}