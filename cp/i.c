//3. *Number Type Checker*
 //  Write a C program that takes an integer as input and checks whether it is positive, negative, or zero.


 #include<stdio.h>
 int main()
 {
    int a;
    printf("enter value");
    scanf("%d",&a);
    if(a>0){
    printf("a is positive");
    }
    else if(a<0){
        printf("a is negative");}
    else{
    printf("a is 0");
    }

 }
