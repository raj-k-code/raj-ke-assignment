//simple interest
#include<stdio.h>
void simInterest();
void simInterest(){

 float sim,p,r,t;
 printf("Enter principal amount:\n");
 scanf("%f",&p);
 printf("Enter rate amount:\n");
 scanf("%f",&r);
 printf("Enter time amount:\n");
 scanf("%f",&t);
 sim=(p*r*t)/100;
 printf("Simple interest:%f",sim);
}
int main(){
simInterest();
return 0;
}
