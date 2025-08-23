#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("hello.txt","r");
if(fp==NULL){
printf("error");
}
else{
printf("file succesfully opened");
}
fclose(fp);
}