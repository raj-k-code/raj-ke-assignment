// Find a generic root of a integer using do-while
#include<stdio.h>
void generic(){
int n,r,sum=0,tem;
 printf("Enter a integer number:\n");
 scanf("%d",&n);
   tem=n;
        do{
	   r=tem%10;
	   sum+=r;
	   tem=tem/10;
	   if(tem==0){
	       if(sum>9){
	            tem=sum;
	            sum=0;
	       }
	   }

       }while(tem!=0);
printf("Generic root of your number: %d\n",sum);

}

int main (){
 generic();
return 0;
}

