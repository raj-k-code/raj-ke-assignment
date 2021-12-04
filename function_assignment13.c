// GCD of tow numbers
#include<stdio.h>
void gcd();
void gcd(){

 int n1,n2,gcd;
 printf("Enter two numbers:\n");
 scanf("%d%d",&n1,&n2);
 
 int max=n1>n2?n1:n2;
  while(1){
   if(max % n1==0 && max % n2==0 ){
     printf("LCM of %d and %d is %d\n",n1,n2,max);
     break;
   }
   ++max; 
  }
  gcd=(n1*n2)/max;
   printf("GCD of %d and %d is %d\n",n1,n2,gcd);
  
}
int main(){
 gcd();
return 0;
}
