/*Write a C program to compute the sum of the two input values. If the two values are the same, then return triple their sum.
Expected Output:

3
12*/


#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value 1:");
    scanf("%d",&a);
    printf("enter value 2:");
    scanf("%d",&b);
    c=a+b;
    if(a==b){
        c=3*c;
        printf(" triple sum %d",c);
    }
    else{
        printf("no sum ");
    }

}
