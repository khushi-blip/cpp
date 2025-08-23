#include<stdio.h>
#include<string.h>
void main()
{
    char ch[]="hloo";
    printf("before=%s",ch);
    strupr(ch);
    printf("after=%s",ch);
    strlwr(ch);
    printf("string %s",ch);
}
void strupr(char *s) {
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 97 && s[i] <= 122) {
            s[i] = s[i] - 32;
        }
        i++;
    }
}
