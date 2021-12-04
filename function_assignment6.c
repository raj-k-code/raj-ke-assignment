//Gross salary of an employee
#include<stdio.h>
void gross();
void gross(){
 int bs;
 float hra=0,ta=0,da=0,gs;
 printf("Enter basic salary :\n");
 scanf("%d",&bs);
 if(bs>1000){
 hra=(bs*10)/100.0f;
 ta=(bs*5)/100.0f;
 da=(bs*3)/100.0f;
 }
 else{
 hra=(bs*5)/100.0f;
 ta=(bs*3)/100.0f;
 }
 gs=hra+ta+da+bs;
 printf("Hra: %f\n",hra);
 printf("Ta: %f\n",ta);
 printf("Da: %f\n",da);
 printf("Basic salary: %f\n",gs); 
}
int main(){
  gross();
return 0;
}
