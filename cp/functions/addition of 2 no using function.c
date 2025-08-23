#include<stdio.h>
int add(int a,int b){
  return a+b;

}
int main()
{
  int x=30,y=40;
  int sum=add(x,y);
  printf("%d",sum);
}