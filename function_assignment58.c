// Calculate sum of natural numbers using do-while
#include<stdio.h>
void number(){
 int i=1,n,sum=0;
 printf("Enter a natural number limit\n");
 scanf("%d",&n);
if(n>0){
   do{
     sum=sum+i;
     i++;
   }while(i<=n); 
  printf("Sum: %d\n",sum);
}
else
 printf("Entered Number is not natural number..\n");

}
int main(){
number();
return 0;
}
