/*Print the table of a number entered by the user in*/

#include<stdio.h>
int main()
{

    int i=1,a;
    printf("enter value by user");
    scanf("%d",&a);
    while(i<=10){
        printf("%d*%d=%d\n",a,i,i*a);
        i++;
    }

}
