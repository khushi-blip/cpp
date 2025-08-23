#include<stdio.h>
int main()
{
  int arr[10]={1,2,3,4,5};// int arr[3]={1,2,3,4,5}; , int arr[],int arr[2] less than the array it will give value only to 2 baaki garbage value
  printf("%d\t",arr[0]);// int arr[100]={1,2}; baaki mei value 0 hogi
  printf("%d\t",arr[1]);
  printf("%d\t",arr[2]);
  printf("%d\t",arr[3]);
  printf("%d\t",arr[4]);
  printf("%d",arr[6]);

}