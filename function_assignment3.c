// Area of triangle
#include<stdio.h>
void area();
void area(){
int h,b;
float result;
 printf("Enter height and base values:\n");
 scanf("%d%d",&h,&b);
 result=1/(float)2*b*h;
 printf("Area of a triangle:%.2f\n",result);
}
int main(){
 area();
return 0;
}
