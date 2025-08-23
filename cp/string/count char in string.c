#include<stdio.h>
int main(){
  char a[10],count=0;
  printf("enetr string");
  gets(a);
  for(int i=0;a[i]!='\0';i++){
    count++;}
  
    printf("total no char is=%d",count);
  
  
}