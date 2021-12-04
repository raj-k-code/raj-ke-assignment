// Calculate profit or loss
#include<stdio.h>
void pl(){
 int cp,sp,amount;
 printf("enter cost price:\n");
 scanf("%d",&cp);
 printf("enter selling price:\n");
 scanf("%d",&sp); 
if(sp>cp)
{
amount=sp-cp;
 printf("profit:%d\n",amount);
}
else
if(sp<cp){
amount=cp-sp;
 printf("loss:%d\ns",amount);
}
else
 printf("NO profit No loss\n");


}

int main(){
 pl();
return 0;
}
