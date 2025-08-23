#include<stdio.h>
struct employee{
  int empid;
  float salary;
};
int main(){
  struct employee e1[30];
  printf("enter value");
  for(int i=0;i<2;i++){
    scanf("%d",&e1[i].empid);
    scanf("%f",&e1[i].salary);
  }
  for(int i=0;i<2;i++){
    printf("%d",e1[i].empid);
    printf("%f",e1[i].salary);
  }
}