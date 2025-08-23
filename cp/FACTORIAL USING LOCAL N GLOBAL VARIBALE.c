#include<stdio.h>
int a=18;
int main(){
  int i, fact = 1;
    printf("enter value from user:");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    printf("factorial of local variable is  %d is %d", a, fact);

}
