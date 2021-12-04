//the number is even or odd
#include<stdio.h>
void pn();
void pn(){
 int a;
 printf("Enter a numbers:\n");
 scanf("%d",&a);
    if(a%2==0)
       printf("Number is even: %d\n",a);
    else
       printf("Number is odd: %d\n",a);


}
int main(){
  pn();
return 0;
}
