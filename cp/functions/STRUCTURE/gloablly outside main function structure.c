#include<stdio.h>
struct student{
  int rollno;
  float per;
};
struct student s1;// globally outside main function(how objects are created point no 3)
int main(){

  s1.rollno=10;
  s1.per=70.3;
  printf("%d\n",s1.rollno);
  printf("%f",s1.per);
  return 0;
}