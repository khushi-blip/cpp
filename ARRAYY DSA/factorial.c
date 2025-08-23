#include<stdio.h>
int factorialpoint(int*);
int main(){
  int num;
  printf("enter value");
  scanf("%d",&num);
  int res=factorialpoint(&num);
  printf("factorial is %d",res);
}
int factorialpoint(int *a){
  int fact=1;
  printf("%d",*a);
  for(int i=1;i<=(*a);i++){
    fact=fact*i;
  }
  return fact;
}