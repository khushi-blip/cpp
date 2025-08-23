#include<stdio.h>
int main()
{
  int arr[3][3]={2,3,4,5,2,5,8,6,9},i,j,sum;
  for(i=0;i<3;i++){
    for(j=0;j<4;j++){
      if(arr[i][j]%2==0)
      
      sum+=arr[i][j];
    
      
    }
  }
    printf("%d",sum);
  
}