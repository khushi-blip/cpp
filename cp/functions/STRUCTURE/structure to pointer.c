#include<stdio.h>
struct student{
  int id;
  float gpa;
}s1;
struct student *p;
int main()
{
struct student *p=&s1;
p->id=33;
printf("id of student is%d\n",(*p).id);
p->gpa=8.7;
printf("gpa is %f",(*p).gpa);

}