#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node*link;
};
struct node*head,*temp;
int main(){
  struct node*p;
  p=(struct node*)malloc(1*sizeof(struct node));
  p->data=10;
  p->link=NULL;
  if(head==NULL){
    head=temp=p;
  }
  else
  {
  temp->link=p;
    temp=p;
  }
  printf("node inserted succusfully");

  printf("node data %d",p->data);
  
}