#include<stdio.h>
#include<string.h>

void concat(char *s1, char *s2){
  int i,len=0;
for(i=0;s1[i]!='\0';i++) {
  len ++;
}   for(i=0;s2[i]!='\0';i++){
  s1[len+i]=s2[i];
}
s1[len +i]='\0';
}
int main(){
  char s1[40]="khushi";
  char s2[40]="kandpal";
  concat(s1,s2);
  printf("%s",s1);
  return 0;
}
