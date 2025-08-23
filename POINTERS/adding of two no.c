#include<stdio.h>
int main()
{
  int a,b,*p,*q;
  printf("enter values of a and b:");
  scanf("%d %d",&a,&b);
  p=&a;
  q=&b;
  int sum=*p+*q;
  printf("%d",sum);
}