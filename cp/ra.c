#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = {'a', 'b', '\0', 'x', 'y', '\0'};
    printf("%d", strlen(str));
    printf("%d", sizeof(str));
    return 0;
}