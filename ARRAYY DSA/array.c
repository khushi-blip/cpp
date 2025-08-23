// create array fucntion to take value from user and array should be global
#include<stdio.h>
int arr[50],arraysize;
int variable();// iske bina kaam chl jta hai
int variable(){
printf("how many vlaue u wnna enter");
scanf("%d",&arraysize);
printf("entered elements\n");
for(int i=0;i<arraysize;i++){
  scanf("%d",&arr[i]);
}
//for(int i=0;i<arraysize;i++){
 // printf(" %d",arr[i]);
//}
}
int main(){
  variable();
  for(int i=0;i<arraysize;i++){
  printf(" %d",arr[i]);


  }
}
