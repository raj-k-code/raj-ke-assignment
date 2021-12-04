// Reverse a given number using do-while
#include<stdio.h>
void reverse(){
 int n,m,sum=0;
 printf("enter a  number\n");
 scanf("%d",&n);

do{
m=n%10;
sum=sum*10+m;
n=n/10;
}while(n);
 printf("After Reversing number: %d\n",sum);

}
int main(){
 reverse();
return 0;
}

