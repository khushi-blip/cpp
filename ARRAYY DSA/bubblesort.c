#include<stdio.h>
void bubblesort(int *,int);
void printarray(int *,int);
void bubblesort(int arr[],int size){
  int i,j,temp;

  for(i=0;i<size;i++){// pass
    for(j=0;j<size-i-1;j++){// comparision
      if(arr[j]>arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
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
    bubblesort(arr, size);
    printarray(arr,size);
  }
