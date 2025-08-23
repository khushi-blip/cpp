#include<stdio.h>
void main()
{
  int *p[]={11,22,33,44};
  int i=1;
  while(i<4)
  {
    printf("%d\t",*(p+(i-1)));
    i++;
  }
}