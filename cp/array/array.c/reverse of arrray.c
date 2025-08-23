#include<stdio.h>

int main() {
    int a[10];
    int size = 5;

    printf("Enter 5 integer values:\n");
    for(int i = 0; i < size; i++) {
        printf("Enter value for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nArray in reverse order:\n");
    for(int i = size - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}