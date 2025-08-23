//2. *Grade Calculator*
//   Write a c program that takes a student's percentage as input and assigns a grade based on the following conditions:
  // - 90% and above → Grade A
  // - 80% to 89% → Grade B
  // - 70% to 79% → Grade C
   //- 60% to 69% → Grade D
   //- Below 60% → Grade F

   #include<stdio.h>
   int main(){
        int marks;
    printf("enter student grades");
    scanf("%d",&marks);
    if(marks >=90){
    printf("grade A");}
    else if(marks>=80&&marks <=89){
    printf("grade B");
    }
    else if(marks>=70&& marks<=79 ){
    printf("grade C");
    }
    else if(marks>=60&& marks<=69){
        printf("grade D");
    }
    else{
        printf("fail");
    }
   }




