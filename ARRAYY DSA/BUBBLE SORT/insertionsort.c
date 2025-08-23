#include<stdio.h>
void insertionsort(int *,int );
void printsort(int*,int);
void insertionsort(int arr[],int size){
  int temp,i,j;
  for(int i=1;i<size;i++){
    temp=arr[i];
    int j=i-1;
    while(j>=0 &&arr[j]>temp){
      arr[j+1]=arr[j];
      j=j-1;
    }
    arr[j+1]=temp;

  }
}
 void printsort(int arr[],int size){
  int i;
  for(i=0;i<size;i++){
    printf("%d",arr[i]);
  }
}
int main(){
  int arr[100],size;
  printf("enter size of array");
  scanf("%d",&size);
  int i;
  printf("enter elements");
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  
  }
  insertionsort(arr,size);
  printsort(arr,size);
}