#include<stdio.h>
#include<conio.h>
int main(){
  int age;
  printf("enter the age");
  scanf("%d",&age);
  if(age>13){
     printf("%d he is older.\n",age);
  }
  else{
    printf("%d he is younger.\n",age);
  }
}
