#include<stdio.h>
#include<stdlib.h>
int main(){
  int *p;
  p=(int*)malloc(2*sizeof(int));
  if(p==NULL){
    printf("memory allocation %p",p);
  }
  else 
  printf("hands up %p",p);

}