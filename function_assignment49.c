// Reverse a  number
#include<stdio.h>
void reverse(){
 int n,m,sum=0;
 printf("enter a  number\n");
 scanf("%d",&n);

while(n){
m=n%10;
sum=sum*10+m;
n=n/10;
}
 printf("After Reversing number: %d\n",sum);

}
int main(){
 reverse();
return 0;
}

