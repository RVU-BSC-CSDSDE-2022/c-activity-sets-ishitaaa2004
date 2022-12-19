#include<stdio.h>
#include<stdlib.h>
int input();
void add(int a, int b, int *sum);
void output(int a,int b, int sum);

int main(){
  int a,b,sum;
  a = input();
  b = input();
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}
int input(){
  int s;
  printf("enter the number\n");
  if(scanf("%d",&s)!=1)
  {
    printf("error");
    exit(0);
  }
  return(s);
  
}
void add(int a, int b , int *sum){
  *sum = a+b;
}
void output(int a,int b, int sum){
  printf("the sum of %d and %d is %d",a,b,sum);
}