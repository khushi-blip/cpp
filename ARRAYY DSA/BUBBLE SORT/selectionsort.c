#include<stdio.h>
void selectionsort(int *,int);
void printarray(int *,int);
void selectionsort(int arr[],int size){
  int i,j,min,temp;
  for(i=0;i<size-1;i++){
    min=i;
    for(j=i+1;j<size;j++){
      if (arr[j]<arr[min]){
        min =j;
      }
    }
  
  temp=arr[min];
  arr[min]=arr[i];
  arr[i]=temp;
  }
}
void printarray(int arr[],int size){
for(int i=0;i<size;i++){
    printf("%d",arr[i]);
  }
}

int main(){
int size,arr[100];
    printf("enter size of array:");
  scanf("%d",&size);
  printf("enter elemets");
for(int i=0;i<size;i++){
  scanf("%d",&arr[i]);
}
    selectionsort(arr, size);
    printarray(arr,size);
  }
