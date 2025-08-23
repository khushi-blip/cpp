#include<stdio.h>
int main()
{
  
  int a,b;

  printf("enter values of a and b");
  scanf("%d %d",&a,&b);
  b=++a;
  printf("a=%d",a);
  printf("b=%d",b);
  b=++a;
  printf("b=%d",b);
  printf("a=%d",a);
  b=a++;
  printf("a=%d,b=%d\n",a,b);
  
}
