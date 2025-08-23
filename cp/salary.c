/*Ramesh salary is input through keyboard,dearness allowance is
40% of his basic salary ,and house rent is 20% is basic salary
WAP in C to calculate gross salary*/

#include<stdio.h>
int main()
{
    int da,hra,bs,gs;
    printf("enter salary of ramesh:");
    scanf("%d",&bs);
    da=bs*40/100;
    hra=bs*20/100;
    gs=bs+da+hra;
    printf("basic salary %d\n",bs);
    printf("dearness allowance %d\n",da);
    printf("home rent %d\n",hra);
    printf("gross salary %d\n",gs);

}


