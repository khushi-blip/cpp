#include<stdio.h>
struct student{
  int rollno;
  float gpa;

 struct subjectmarks{
  float ai;
  float dsa;
  float eng;

 }s1[4];
};
int main(){
  struct student s[4];
  printf("enter value");
  for(int i=0;i<2;i++){
    scanf("%d",&s[i].rollno);
    scanf("%f",&s[i].gpa);
    scanf("%f",&s.s1[i].ai);
    scanf("%f",&s.s1[i].dsa);
    scanf("%f",&s.s1[i].eng);
  }
  for(int i=0;i<2;i++){
    
    printf("%d",s[i].rollno);
    printf("%f",s[i].gpa);
    printf("%f",s.s1[i].ai);
    printf("%f",s.s1[i].dsa);
    printf("%f",s.s1[i].eng);
}
}
  


