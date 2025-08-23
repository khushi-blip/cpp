#include<stdio.h>
int main()
{
  int a,*p;
  printf("value of a:");
  scanf("%d",&a);
  p=&a;
  if(*p%2==0){
    printf("even");
  }
  else{
    printf("odd");
  }
}