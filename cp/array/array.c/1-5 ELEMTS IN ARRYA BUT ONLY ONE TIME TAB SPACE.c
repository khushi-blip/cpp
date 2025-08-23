#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) { // Loop to print the first 5 elements
        printf("%d\t", arr[i]);
    }
    printf("%d",arr[6]); //print the 7th element without tab.
    return 0;
}