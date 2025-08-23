#include<stdio.h>
void x(int a){
  int *p=&a;
  printf("%p address",p);
  printf("%d value",p);
}
int main(){
  int a=12;
  printf("%d",a);
  x(a);

}