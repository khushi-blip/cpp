#include<stdio.h>
int main()
{
    int p,n,r,si;
    printf("enter value of p\n");// dont put smthin near %d scanf usko pareshani hoti hai ^^
    scanf("%d",&p);
    printf("enter value of n\n");
    scanf("%d ",&n);
    printf("enter value of r\n");
    scanf("%d ",&r);
    si=p*r*n/100;
    printf("simple intrest %d\n",si);
    return 0;
}
