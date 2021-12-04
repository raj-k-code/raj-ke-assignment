// Find number is armstrong or not
#include<stdio.h>
void armstrong(){
 int n,m,sum=0,p;
 printf("enter a  number\n");
 scanf("%d",&n);
p=n;
while(n!=0){
m=n%10;
sum=sum+m*m*m;
n=n/10;
} 
if(p==sum)
 printf("%d is  Armstrong\n",sum);
else
 printf("%d is not Armstrong\n",p);

}
int main(){
 armstrong();
return 0;
}

