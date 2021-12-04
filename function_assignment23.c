// FIND leap year
#include<stdio.h>
void leap();
void leap(){
 int a;
 printf("Enter year:\n");
 scanf("%d",&a);
     if(a%4==0)
       printf("Year is leap: %d\n",a);
     else 
       printf("Year is not leap: %d\n",a);


}
int main(){
  leap();
return 0;
}
