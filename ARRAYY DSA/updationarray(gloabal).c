//write a function to delete an array (GLOABAL)
#include<stdio.h>
 void createarray();//prototype
 void printarray();//prototype
 void insertarr();//prototype
 void deletearray();//prototype
 void updatearray();//prototype
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
 
  void deletearray(){// declaration
    int position;
  printf("position to be deleted\n");
  scanf("%d",&position);
  if(position<0||position>size){// dono 
    printf("invalid position enetr postion %d\n",size);
  }
  else{
   // printf("value of size %d",size);
    
    int delvalue=arr[position-1];
    for(int i=position-1;i<size-1;i++){
      arr[i]=arr[i+1];
    }
    size--;
    printf("elements deleted successfully %d\n",delvalue);

  }

}
void updatearray(){//defintion
  int p;
  int value;
  printf("enter the position where you wanna update value");
  scanf("%d",&p);
  if(p<1||p>size){
    printf("invalid posiiton\n");
  }
  else{
    printf("enter the value to update");
    scanf("%d",&value);
  
  arr[p-1]=value;
  printf("element %d updated succesfully at %d position",value,p);
  }

}
void printarray(){
  for(int i=0;i<size;i++){
    printf("%d\t",arr[i]);
  }
}
int main(){
    createarray();
    printarray();
    //insertarr();
   //printarray();
    //deletearray();
    //printarray();
    updatearray();
    printarray();
}