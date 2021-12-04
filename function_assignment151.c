// swap two numbers using pointer
#include<stdio.h>
void swap(){
int a,b;
 int *p,*q;
 p=&a; q=&b;
  printf("Enter value of a,b ..\n");
  scanf("%d %d",p,q);
  *p=*p + *q;
  *q=*p - *q;
  *p=*p - *q;
  printf("After swapping a: %d b: %d \n",*p,*q);
}
int main(){
  swap();
 return 0;
}
