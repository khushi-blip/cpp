#include<stdio.h>
#include<stdlib.h>
#define capacity 5
int stack[capacity];
int top=-1;
void push(){
  if(top==capacity-1){
    printf("stack overflow");
    return;
  }
  else{
    int value;
    printf("enter the value u wanna enter");
    scanf("%d",&value);
    top++;
    stack[top]=value;
    printf("value pushed successfully into the stack\n");
  }
}
  void display(){
    printf("elements of stack\n");
    for(int i=top;i>=0;i--){
      printf("%d",stack[i]);
    }
  }

int main(){
  push();
  push();
  push();
  push();
  display();
  
}