#include<stdio.h>
int main()
{
  int i,fact=1,a;
  printf("enter value from user");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    fact=fact*i;

  }
  printf("fcatorial of %d is %d",a,fact);
}