//write a C program to make funtion without arugment
// which takes the value from  user and returns the factorilof of the number
#include<stdio.h>
void hello(){
  int a,fact=1,i;
  printf("enter value from user:");
  scanf("%d",&a);
  for (i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    printf("factorial is  %d is %d", a, fact);

}
int main()
{
  hello();
  
}
