#include<stdio.h>
#include <string.h>

int main() {
    char str[20];
    int i;

    printf("enetr string ");
    scanf("%s",str);  

    int len = strlen(str);

    printf("reverse of string is ");
    for (i = len-1; i >= 0;i--) {
        printf("%c",str[i]);
    }
    
}
