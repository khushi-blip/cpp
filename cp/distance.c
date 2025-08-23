/*the distance between two cities in (km)is input. WAP IN C to
convert and print the distance in m,feet,inches,cm*/


#include<stdio.h>
int main()
{
    int km,m,cm,ft,inch;
    printf("enter distance between cities");
    scanf("%d",&km);
    m=1000*km;
    cm=m*100;
    inch=cm*2.54;
    ft=inch/12;
    printf("%d\n",m);
    printf("%d\n",cm);
    printf("%d\n",inch);
    printf("%d\n",ft);
}




