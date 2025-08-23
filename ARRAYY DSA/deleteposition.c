#include<stdio.h>
int creationarray(int *,int);     //prototype
//void updationarray(int *,int );
int linearsearcharray(int*,int,int);
int deletearray(int *,int,int );
int insertionarray(int*,int,int,int);
int insertusingelement(int*,int);
void printarray(int*,int);    //prototype
int creationarray(int arr[],int size)
{
    int i;
    printf("enter the size:\n");
    scanf("%d",&size);
    printf("enter elements");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    return size;
}
int linearsearcharray(int arr[],int size ,int search)
{
    //printf("size of array is %d",size);
    int i;
    //for(i=0;i<size;i++)
 //{
   //  printf("%d",arr[i]);
 //}
    for(i=0;i<size;i++)
    {
        if(arr[i]==search)
        {
            return (i+1);
        } 
    }
    return (-1);
}
int insertionarray(int arr[],int size,int pos,int value )
{
    int i;
 for(i=size-1;i>=pos-1;i--)
 {
  arr[i+1]=arr[i];
 }
 arr[pos-1]=value;
 printf("value %d inserted sucessfully at pos %d\n",value,pos);
 size++;
 return size;
}
int insertusingelement(int arr[],int size)
{
    int ele;
    printf("enter the element after which you want to insert:");
    scanf("%d",&ele);
    int pos = linearsearcharray(arr,size,ele);
    printf("value of position %d:\n",pos);
    if(pos!=-1)
    {
        printf("element found at pos %d",pos);
        int value;
        printf("enter the value you want to insert");
        scanf("%d",&value);
        size=insertionarray(arr,size,pos,value);
    }
    else
    {
        printf("element not found\n errorin insert");
    }
    return size;
}
int deletearray(int arr[],int size,int position){
  if(position<0||position>size){// dono 
    printf("invalid position \n",size);
  }   
    int delvalue=arr[position-1];
    for(int i=position-1;i<size-1;i++){
      arr[i]=arr[i+1];
    }
    size--;
  
    printf("element deleted successfully  \n",delvalue);
    return size;

  }
int deleteusingelement(int arr[],int size){
  int element;
  printf("enter the element u want to delete");
  scanf("%d",&element);
  int pos=linearsearcharray(arr,size,element);
  printf("value of position ia %d\n",pos);
  if(pos!=-1){
    printf("elemnt foubnd at pos %d",pos);
    size=deletearray(arr,size,pos);
  }
  else{
    printf("element not found ");
  }
  return size;
  }



void printarray(int arr[],int size)
{
 int i;
    for(i=0;i<size;i++)
 {
     printf("%d",arr[i]);
 }
}
int main()
{
    int arr[100];
 int size;
 size = creationarray(arr,size);
 printarray(arr,size);
    //int search;
    //printf("enter the element you want to find:");
    //scanf("%d,&search");
    size=insertusingelement(arr,size);
    printarray(arr,size);
    size=deleteusingelement(arr,size);
    printarray(arr,size);

}