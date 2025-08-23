#include<stdio.h>
int createarray(int*,int);//prototype
int insertarray(int *,int);//prototype
int deletearray(int*,int);//prototype
void printarray(int *,int);//prototype
int createarray(int arr[],int s){// here we have not given size of array beacuzwe will ask from user 

  printf("enter size of array:");
  scanf("%d",&s);
  printf("enter elements:\n");
  for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
  }
  return s;
}
int insertarray(int arr[],int s){
  int p,v;
  printf("enter the position where u wanna insert value");
  scanf("%d",&p);
  if(p<0||p>s){
    printf("invalid position:");
  }
  else{
  printf("enter the value");
  scanf("%d",&v);
  for(int i=s-1;i>=p;i--){
    arr[i+1]=arr[i];
  }
  }
   arr[p-1]=v;
  return s++;
}
int deletearray(int arr[],int s){
  int p;
  printf("enter position to be deleted");
  scanf("%d",&p);
  if(p<0||p>s){
    printf("invalid position");
  }
  else{
    int delvalue=arr[p-1];
    for(int i=p-1;i<s-1;i++){
      arr[i]=arr[i+1];
    }
  
    printf("elements deleted successfully %d\n",delvalue);

  }
  return s--;

}
void printarray(int arr[],int s){// local hai toh arguments  ismei bhi jaege
  for(int i=0;i<s;i++){
    printf("%d\t",arr[i]);
  }
}
int main(){
  int arr[100];
  int s;
  s=createarray(arr,s);
  printarray(arr,s);
  s=insertarray(arr,s);
  printarray(arr,s);
  s=deletearray(arr,s);
  printarray(arr,s);
}