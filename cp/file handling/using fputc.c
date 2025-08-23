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
  char name[]="hello";
  int i=0;
  while(name[i]!='\0'){
    fputc(name[i]!='\0');
  }
  fputc(65,fp);
  printf("data wrietten succesuuselyy");
fclose(fp);
}