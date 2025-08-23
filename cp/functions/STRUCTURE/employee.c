#include<stdio.h>
struct employee{
  int id;
  float salary;
  int empcode;
}s1;
int main()
{
  
  s1.id=2340;
  s1.salary=3000;
  s1.empcode=301;
  printf("%d\n",s1.id);
  printf("%f\n",s1.salary);
  printf("%d\n",s1.empcode);

struct employee s2;// inside main function (how objects are created point no 2)
s2.id=3401;
s2.salary=2000;
s2.empcode=210;
printf("%d\n",s2.id);
printf("%f\n",s2.salary);
printf("%d\n",s2.empcode);
};