#include<stdio.h>
int main()
{
  int arr[3][3]={302,472,3032,387,421,220,421},i,j;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
  printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }
  printf("array after updation\n\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      if((arr[i][j])%2==0){
    arr[i][j]+=((arr[i][j]*10)/100);//
    
      }
      else{
    arr[i][j]+=((arr[i][j]*15)/100);//
    
      }
    
    
      
    }
  }
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
  printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }
  
}