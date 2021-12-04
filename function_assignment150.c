// Add two numbers using pointers
#include<stdio.h>
void sum(){
int a,b;
 int *p,*q;
 p=&a; q=&b;
  printf("Enter two numbers..\n");
  scanf("%d %d",p,q);
  printf("Sum of your number : %d \n",(*p + *q));
}
int main(){
  sum();
 return 0;
}
