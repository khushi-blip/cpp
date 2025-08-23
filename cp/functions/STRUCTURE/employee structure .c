#include<stdio.h>
struct employee{
  int emp_id;
  float emp_salary;
  int emp_dob;
}e1;
struct employee *p;
int main(){
  struct employee *p=&e1;
  printf("enter id of employee");
  scanf("%d",&p->emp_id);
  printf("enter salary of employee");
  scanf("%f",&p->emp_salary);
  printf("enter date of birth of employee");
  scanf("%d",&p->emp_dob);
  printf("the id is%d\n",p->emp_id);
  printf("the salary is%f\n",p->emp_salary);
  printf("the date of birth is %d", p->emp_dob);
  
}