#include<stdio.h>
struct submarks{  //   child structure
        int eng;
        int math;
};
struct student{   // PARENT
  int roll;
  float per;
  struct submarks s1;
};
int main(){
  struct student s;
  s.s1.eng=89;
  s.s1.math=90;
  s.roll=33;
  s.per=89;
  printf("%d\n",s.s1.eng);
  printf("%d\n",s.s1.math);
  printf("%d\n",s.roll);
  printf("%f",s.per);
}