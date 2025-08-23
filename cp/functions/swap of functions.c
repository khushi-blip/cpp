#include<stdio.h>
void swap(int a,int b){
  int temp=a;
  a=b;
  b=temp;
  return;

}
int main()
{
  int a;
  
  printf("enter value of a:");
  scanf("%d",&a);
  int b;
  printf("enter value of b:");
  scanf("%d",&b);
  swap(a,b);
  printf(" value of a is= %d\n",a);
  printf("value of b is=%d",b);
}