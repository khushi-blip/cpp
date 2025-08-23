#include<stdio.h>
int pro(int x,int y){
  return x*y;
}
int add(int x,int y){
  return x+y;
}
int main()
{
  int a=30,b=30;
int  multi= pro(a,b);
  printf("multiplication is=%d\n",multi);
  int adds=add(a,b);
  printf("sum is =%d",adds);
}