// find maximum number among two number
#include<stdio.h>
void greater();
void greater(){
 int a,b;
 printf("Enter two numbers:\n");
 scanf("%d%d",&a,&b);
    if(a>b )
      printf("Maximum number: %d\n",a);
    else 
      printf("Maximum number: %d\n",b);
     
}
int main(){
  greater();
return 0;
}
