#include <stdio.h>
void add(int*,int*);
void add(int *p, int *q) {
printf("Enter two values: ");
scanf("%d %d", p, q);
}
int main() {
int p, q;
add(&p, &q); 
int r = p + q;
 printf("addition %d + %d = %d", p, q, r);


}
