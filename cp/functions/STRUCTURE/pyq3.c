#include<stdio.h>
int main()
{
 int x[]={10,15,20,25,30};
 int *p=x;
 for(int i=0;i<4;i++){
  *p=*p+5;
  p=p+1;
  printf("%d",x[i]);
 }
 return 0;
}