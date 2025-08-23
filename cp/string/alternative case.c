#include<stdio.h>
#include<string.h>
int main(){
  char name[20];
  printf("enetr name");
  gets(name);

  for(int i=0;i<strlen(name);i++){
  if(name[i]>=97 && name[i]<=122){
  name[i]=name[i]-32;}
 else  if(name[i]>=65 && name[i]<=90){
  name[i]=name[i]+32;
}
}
printf("%s",name);
}