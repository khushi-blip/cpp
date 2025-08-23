#include<stdio.h>
int main()
{
   int attendance,percentage,total,eng,maths,ec;
   printf("enter student attendacne percentage\n");
   scanf("%d",&attendance);
   if(attendance >=75){
    printf("student eligible to give exam\n");

    printf("enetr marks of 5 subjects\n");
    printf("eng marks\n");
    scanf("%d",&eng);
    printf("maths marks\n");
    scanf("%d",&maths);
    printf("ec marks\n");
    scanf("%d",&ec);
    total=(eng+maths+ec);
    percentage=(total)/3;
    printf("total Marks: %d\n", total);
   printf("Percentage: %d\n", percentage);
   if(percentage>=50){
    printf("student is pass");}

    else{
        printf("student is fail");
    }
   }
   else{
    printf("not eligible");
   }
   }




