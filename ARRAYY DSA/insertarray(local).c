#include<stdio.h>
int createarray(int* ,int);
int insertarray(int *,int) ;//formal parameter // in local array there must be arguments
void printarray(int *,int);
int createarray(int a[],int s)// definition
{
 int i;
 printf("enter size:");
 scanf("%d",&s);
 printf("value of %d",s);
 printf("enter elements");
 for(i=0;i<s;i++)
 {
  scanf("%d",&a[i]);
 }
 return s;
}
int insertarray(int a[],int size){
  int i;
  int p;
  int value;
 
  printf("enter position ");
  scanf("%d",&p);
  
    if(p<0||p>size){
      printf("invalid postn");
    }else{
      printf("enter value ");
  scanf("%d",&value);
      
    
  for(i=size-1;i>=p;i--){
    a[i+1]=a[i];
  }
}
  a[p-1]=value;
  return size++;

}
// //int deletearray(int a[],int s,int p,int v){// declaration
//     int p;
//   printf("position to be deleted\n");
//   scanf("%d",&p);
//   if(p<0||p>size){// dono 
//     printf("invalid position enetr postion %d\n",s);
//   }
//   else{
//    // printf("value of size %d",size);
    
//     int delvalue=a[p-1];
//     for(int i=p-1;i<s-1;i++){
//       a[i]=a[i+1];
//     }
//     s--;
//     printf("elements deleted successfully %d\n",delvalue);

//   }

void printarray(int a[],int s){
  for(int i=0;i<s;i++){
    printf("%d\n",a[i]);
  }
}
int main()
{
 int arr[100];   //local to main scope
 int size;
 size=createarray(arr,size); // this will update but ye int hai so it will retrun tbhi return s lgaya which is size
 printarray(arr,size);
 size=insertarray(arr,size);
 printarray(arr,size); 
 //size=deleteaaray(arr,size,p,v);
 //printarray(arr,size);

}