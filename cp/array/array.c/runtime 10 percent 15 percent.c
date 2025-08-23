#include<stdio.h>
int main(){
  int arr[20];

  int arraysize, i;
  printf("how many elements you wanna enter");
  scanf("%d",&arraysize);
  printf("enter elements at even indexes");
  for(i=0;i<arraysize;i+=2){
    scanf("%d\t",&arr[i]);
  }
}
    
    