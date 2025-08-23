#include<stdio.h>
#include<stdlib.h>
void callocx(int*);//prototype
void callocx(int *p){//declaration
    p=(int*)calloc(1,sizeof(int));
    if(p!=NULL){
        printf("memory allocated succesfully\n");
    }
    else{
        printf("error");
}

        printf("from function %p\n",p);//address
        *p=10;
        printf("from function %d\n",*p);//value
}
    
int main(){
          int *p;
          callocx(p);
         
        }
