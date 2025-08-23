#include<stdio.h>
int main()
{
    char ch;
    printf("enter the ch");
    scanf("%c",&ch);
    printf("%c",ch);
    switch(ch){

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("%c is vowel",ch);
    break;
    default:

        printf("%c is consonent",ch);
    }

    }




