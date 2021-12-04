// Number is divisible by 11 using (vedic math)
#include<stdio.h>
void vedicmath(){
 int n,m,sum=0,i=1,even=0,odd=0;
 printf("enter a  number\n");
 scanf("%d",&n);

while(n){
m=n%10;
sum=sum*10+m;
n=n/10;
}
while(sum!=0){
     m=sum%10;
   if(i%2==0){
    even=even+m;
   }
   else
    odd=odd+m;
    
  sum=sum/10;
  i++;
}
 printf("Even placed digits sum: %d\n",even); 
 printf("odd placed digits sum: %d\n",odd);
   if(even==odd)
      printf("Number is divisible by 11..\n");
   else
      printf("Number is not divisible by 11..\n");
}
int main(){
 vedicmath();
return 0;
}

