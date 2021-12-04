// check weather a number is divisible by 5 and 11 or not
#include<stdio.h>
void p();
void p(){
 int a;
 printf("Enter a number :\n");
 scanf("%d",&a);
     if(a%5==0 && a%11==0)
       printf("Number is divisible by 5 and 11: %d\n",a);
     else 
       printf("Number is not divisible by 5 and 11: %d\n",a);


}
int main(){
  p();
return 0;
}
