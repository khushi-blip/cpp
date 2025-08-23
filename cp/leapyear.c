//1. *Leap Year Checker*
   //Write a Java program that takes a year as input and checks whether it is a leap year or not. A leap year is divisible by 4 but not by 100 unless it is also divisible by 400.


   #include<stdio.h>
   int main()
   {
    int year;
    printf("enter year:");
    scanf("%d",&year);
    if(year%4==0){
        printf("leap year ");}
        else if(year%400==0){
            printf("leap year by 400");}
            else if (year%100!=0){
                printf("not a leap year");
            }






    }


