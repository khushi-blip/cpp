//write a function to insert the value at 3rd postn.(GLOABAL)
#include<stdio.h>
 void createarray();//prototype
 void printarray();//prototype
 void insertarr();//prototype
  int arr[20];
  int size;
  void createarray(){// definition // there is no arguments in global
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter the elements %d \n",size);
    for(int i=0;i<size;i++){
      scanf("%d",&arr[i]);
    }
    
  }
  void insertarr(){// size will increase of array in insertion
    int pos;
    int val;
    printf("enter postn to insert value");
    scanf("%d",&pos);
    if(pos<0||pos>size){
      printf("invalid position\n");
    }
    else{
      printf("enter the value to \n");
      scanf("%d",&val);
      for(int i=(size-1);i>=(pos-1);i--){// size-1 last element to current array
        arr[i+1]=arr[i];
      }
      arr[pos-1]=val;
      printf("value %d inserted at postn %d\t",val,pos);
      size++;
    }
  }
  void printarray(){
    for(int i=0;i<size;i++){
      printf("%d",arr[i]);
    } 

  }
  int main(){
    createarray();
    insertarr();
    printarray();
  }