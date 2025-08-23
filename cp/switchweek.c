#include<stdio.h>
int main()
{
    int week=5;
    switch(week){
    case 1:
    printf("monday");break;
    case 2:
    printf("tuesday");break;
    case 3:
    printf("wednesday");break;
    case 4:
    printf("thursday");break;
    case 5:
    printf("friday");break;
    case 6:
    printf("sat");break;
    case 7:
    printf("sun");break;
    default:
        printf("invalid week");
}
}
