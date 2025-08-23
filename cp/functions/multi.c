void sum_ofpointer(int *a,int *b,int *sum){
  *sum =*a + *b;
}
int main(){
  int a;
  int b;
  int sum;
  printf("enter the  first number:");
  scanf("%d",&a);
  printf("enter the  second number:");
  scanf("%d",&b);
  sum_of_pointer(&a,&b,&sum);
  printf("the sum of %d %d is: %d",a,b,sum);
}