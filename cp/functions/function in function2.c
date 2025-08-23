#include<stdio.h>
void india(){
  printf("you are in india\n");

}
void america(){ //2 line
  printf("you are in america\n");
  return;// marks the ending of function no matter what u write after return doesnt matter but matters when u write before it
  india();
  
}
void australia(){
  printf("you are in australia\n");
  america();
}
int main(){
america();// 1 line code starts from here
australia();// calling of function named austalia

}
