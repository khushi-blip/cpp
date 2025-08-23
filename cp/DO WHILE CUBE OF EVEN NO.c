/*Program to print the cube of all even numbers 1-50*/

#include<stdio.h>
int main()
{
   int i=1;
   printf("enter value :");
   scanf("%d",&i);
   do{
        if(i%2==0)
        {


        printf("cube of even no are %d=%d\n",i,i*i*i);
        }
        i++;



        }while(i<50);
   }

