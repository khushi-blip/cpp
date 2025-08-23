#include<stdio.h>
int main(){
  FILE *fp;
  fp=fopen("hello.txt","w");
  if(fp==NULL){
    printf("error");
  }
  else{
    printf("file created");
  }
  fclose(fp);
}