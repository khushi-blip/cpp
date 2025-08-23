#include<stdio.h>
#include<string.h>
int main(){
char a[20];
char b[20];
int num=0,stri=0;
char str[80]="Bye 2024 CALaDeR YeaR 2025 2023";
for(int i=0;i<(strlen(str));i++){
  if(str[i]>=65 &&str[i]<=90 || str[i]>=97 && str[i]<=122||str[i]==32){
     a[stri++]=str[i];
  }
  
    else if(str[i]>=48 && str[i]<=57||str[i]==32){  // 0 and 9 values are 48 and 57
    b[num++]=str[i];
}
}
b[num]='\0'; a[stri]='\0';
  puts(a);
  puts(b);
}