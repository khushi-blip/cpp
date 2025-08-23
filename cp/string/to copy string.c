#include<stdio.h>
#include<string.h>
int main(){
  char a[20];
  char b[20];
  printf("enetr valeu");
  gets(a);
  

 int i=0;
 while(a[i]!='\0'){
    
  
  b[i]=a[i];
  
  b[i]='\0';
 }
  
  printf("%s ",b[i]);
  return 0;
  }

  
