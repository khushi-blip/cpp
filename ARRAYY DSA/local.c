#include<stdio.h>
void printarray(int a[],int s){
for(int i=0;i<s;i++){
  printf("%d\t",a[i]);
}
}
int createarray(int arr[],int s){
  int i;
  printf("eneter size of array");
  scanf("%d",&s);
  printf("eneter value of array");
  for(i=0;i<s;i++){
    scanf("%d",&arr[i]);
  }
  return s;
}
int main(){
  int arr[100],size;
  size=createarray(arr,size);
  printarray(arr,size);
  
}