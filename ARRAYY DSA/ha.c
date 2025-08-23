// local
#include<stdio.h>
int createarray(int arr[],int s);//prototype
int insertarray(int arr[],int s);//prototype
void printarray(int arr[],int s);
int createarray(int arr[],int s){
  int i;
  printf("enter the size of array");
  scanf("%d",&arr[i]);
  printf("enter the elements ");
  for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
  }
  return s;
}
int insertarray(int arr[],int s){
  int p,v;
  printf("enter the position you wanna enter the value");
  scanf("%d",&p);
  if(p<1||p>s){
    printf("invalid position");
  }
  else{
    printf("enter the value");
    scanf("%d",&v);
    for(int i=s-1;i>=p;i--){
    arr[i+1]=arr[i];
  }
  }
   arr[p-1]=v;
  return s++;
}
int main(){
  int arr[100],s;
  s=createarray(arr,s);
  printarray(arr,s);
  s=insertarray(arr,s);
  printarray(arr,s);
}