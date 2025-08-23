#include<stdio.h>
int value;
int main(){
  int i,fact=1;
  printf("enter value of global variable");
  scanf("%d",&value);

  for (i = 1; i <= value; i++)
    {
        fact = fact * i;
    }
    printf("factorial of global variable is  %d is %d\n", value, fact);

}