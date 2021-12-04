// Calculate sum of natural numbers
#include<stdio.h>
void number(){
 int i=1,n,sum=0;
 printf("Enter a natural number limit\n");
 scanf("%d",&n);
if(n>0){
   while(i<=n){
     sum=sum+i;
     i++;
   } 
  printf("Sum: %d\n",sum);
}
else
 printf("Entered Number is not natural number..\n");

}

int main(){
number();
return 0;
}
