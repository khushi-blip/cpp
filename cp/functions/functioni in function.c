#include<stdio.h>
void india(){ // 4line
  printf("you are in india\n");
  return ; // 5 line

}
void america(){ // 2 line
  printf("you are in america\n");
  india();// 3 line

  return; // 6th line // marks the ending of function no matter what u write after return doesnt matter but matters when u write before it
  
}
void australia(){
  printf("you are in australia\n");
  america();
  return ;//8th line


}
int main(){
america();//1 line code starts from here
australia();// calling of function named austalia//
return 0; // 9th line
}
// in int main return gives error but return 0 doesnt