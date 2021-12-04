//Count number of digits of an integer
#include<stdio.h>
void number(){
 int n,r,sum=0;
 printf("Enter a integer number:\n");
 scanf("%d",&n);
while(n!=0){
 r=n%10;
 sum++;
 n=n/10;
}
 printf("Number of digits of an integer: %d\n",sum);

}
int main(){
 number();
return 0; 
}
