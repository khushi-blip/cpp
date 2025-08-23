/*Print the table of a number entered by the user in
2*2=4*/

#include<stdio.h>
int main()
{
    int a,i;
    printf("enter no from user");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
    printf("%d*%d =%d\n",a,i,i*a);

}

}
