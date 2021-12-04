//LCM of two numbers
#include<stdio.h>
void lcm();
void lcm(){

 int n1,n2;
 printf("Enter two numbers:\n");
 scanf("%d%d",&n1,&n2);
 
 int max=n1>n2?n1:n2;
  while(1){
   if(max % n1==0 && max % n2==0 ){
     printf("LCM of %d and %d is %d",n1,n2,max);
     break;
   }
   ++max; 
  }


}
int main(){
 lcm();
return 0;
}
