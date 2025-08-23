#include<stdio.h>
#include<string.h>
int main()
{
  char a[20];
  int i=0,word=1;
  printf("enter value");
  gets(a);
  while(a[i]!='\0'){
    if(a[i]==' ')
    word++;
    i++;

  }

  printf("%d",word);
  
}