//Display fibonacci serise
#include<stdio.h>
void serise(){
int a,b,c,n;
 a=-1;
 b=1;
printf("enter a limit of number:\n");
scanf("%d",&n);
while(n!=0){
 c=a+b;
 printf("%d\n",c);
 a=b;
 b=c;
 n--;
}

}
int main(){
  serise();
return 0;
}
