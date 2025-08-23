#include<stdio.h>
#include<string.h>
struct student{
  int rollno;
  char name[30];
  float per;
}s1;//strucutre template(how objects are created point no 1)
int main(){

  s1.rollno=10;
 strcpy(s1.name,"khushi");
  s1.per=70.3;
  printf("%d\n",s1.rollno);
  printf("%s\n",s1.name);
  printf("%f",s1.per);
}