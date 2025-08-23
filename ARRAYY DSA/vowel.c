//Count Vowels and Consonants Using Pointer
#include<stdio.h>
#include<stdlib.h>
void countvc(char*str,int *vowel,int *consonants){
  int i=0;
  while(str[i]!='\0'){
    if(str[i]=='A'|| str[i]=='a'||str[i]=='e'|| str[i]=='E'||str[i]=='i'|| str[i]=='I'||str[i]=='O'|| str[i]=='o'||str[i]=='u'|| str[i]=='U')
    (*vowel)++;
    else{
    (*consonants)++;
  }
  i++;
  }
}
int main(){
  char str[50];
  int vowels=0;
  int consonants=0;
  printf("enter the string: ");
  fgets(str,sizeof(str),stdin);
  countvc(str,&vowels,&consonants);
  printf("number of vowels are:%d\n",vowels);
  printf("number of consonants are:%d\n",consonants);
}