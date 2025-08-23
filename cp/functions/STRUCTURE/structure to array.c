#include<stdio.h>
struct student {
  int rollno;
  float per;
}s1[5];
int main(){
  printf("enter value");
  for(int i=0;i<5;i++){
    scanf("%d",&s1[i].rollno);
    scanf("%f",&s1[i].per);
   
  }
printf("values of student are:\n");
for(int i=0;i<5;i++){
    printf("roll no=%d\n",s1[i].rollno);
    printf("percentage =%f\n",s1[i].per);
    
   
  }
}