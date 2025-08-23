#include<stdio.h>
int main(){
  int a[10];
  printf("enter value");
  gets(a);
  int i=0;
  while(a[i]!='\0')
  {
    printf("\n%c",a[i]);
    i++;
}
return 0;
}

