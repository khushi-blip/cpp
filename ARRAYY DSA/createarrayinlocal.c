#include<stdio.h>
int createarray(int* ,int);
int createarray(int a[],int s)   //formal parameter // in local array there must be arguments
{
 int i;
 printf("how many elements in an array:");
 scanf("%d",&s);
 printf("value of %d",s);
 printf("enter elements");
 for(i=0;i<s;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("elements of array ");
 for(i=0;i<s;i++)
 {
  printf("%d",a[i]);
 }
 return s;
}
void printarray(int a[],int s){
  for(int i=0;i<s;i++){
    printf("%d\n",a[i]);
  }
}
int main()
{
 int arr[100];   //local to main scope
 int size;
 size=createarray(arr,size); // this will update but ye int hai so it will retrun tbhi return s lgaya which is size
 printarray(arr,size); 

}