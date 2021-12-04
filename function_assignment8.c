// Convert tempreture celsius into fahreheit
#include<stdio.h>
int main(){
 float tem;
 printf("enter celcius temperature:\n");
 scanf("%f",&tem);

 tem=(tem*9/5.0f)+32;
 printf("after changing celcius to fehrnite:%f",tem);

return 0;
}
