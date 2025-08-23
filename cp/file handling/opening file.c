#include <stdio.h>

int main() {

    FILE *fp = fopen("data.txt", "r");
if (fp != NULL) {
    // file operations
    fclose(fp);
}
}