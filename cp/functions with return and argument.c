#include<stdio.h>
int add();
int add(){
  int a=10;
  int b=20;
  int c=a+b;
  return c;
  printf("hello");
  return (c);
  return (a+b);
}
int main()
{
  int a=add();
  int b=add();
  printf("%d",a);
  printf("%d",b);
}