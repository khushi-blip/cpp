#include<stdio.h>
#include<string.h>
int main(){
  char name[20]="khushi";
  for(int i=0;name[i]!='\0';i++){
    if(name[i]>='A'&&name[i]<='Z'){
    name[i]=name[i]+32;
    }
  }
  int lenstring=strlen(name);
  int center=strlen(name)/2;
  if(name[center]>=97 && name[center]<=122)
  name[center]-=32;
   printf("%s",name);
}
