#include<stdio.h>
struct student{
  int rollno;

  float marks;
};
int main(){
    struct student s1[20];
    printf("name");
  for(int i=0;i<3;i++){
    
    printf("rollno");
    scanf("%d",&s1[i].rollno);
    printf("amrks");
    scanf("%f",&s1[i].marks);

  }
  
}

