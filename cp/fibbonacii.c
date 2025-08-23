#include<stdio.h>
int main()
{
  int i;n,a=0,b=1;
  printf("%d %d",a,b);
  for(i=0;i<n;i++){
    c=a+b;
    printf("%d",c);
    c=a;
    a=b;
    b=c;

  }
  printf("%d",c);
}