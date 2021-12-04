// check whether a number is a palindorme or not using do-while
#include<stdio.h>
void palindrome(){
 int n,m,sum=0,p;
 printf("enter a  number\n");
 scanf("%d",&n);
p=n;
do{
   m=n%10;
   sum=sum*10+m;
   n=n/10;
}while(n);
if(p==sum)
 printf("%d is  palinrome\n",sum);

else
 printf("%d is not palinrome\n",p);

}

int main(){
 palindrome();
return 0;

}

