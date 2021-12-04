//Count number of digits of an integer using do-while
#include<stdio.h>
void number(){
 int n,r,sum=0;
 printf("Enter a integer number:\n");
 scanf("%d",&n);
do{
 r=n%10;
 sum++;
 n=n/10;
}while(n!=0);
 printf("Number of digits of an integer: %d\n",sum);

}
int main(){
 number();
return 0; 
}
