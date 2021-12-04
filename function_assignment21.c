// greatest of two numbers
#include<stdio.h>
void greater();
void greater(){
 int a,b;
 printf("Enter two numbers:\n");
 scanf("%d%d",&a,&b);
     if(a>b)
       printf("greatest number: %d\n",a);
     else 
       printf("greatest number: %d\n",b);


}
int main(){
  greater();
return 0;
}
