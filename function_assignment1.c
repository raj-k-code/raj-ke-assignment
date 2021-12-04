// Area and circumference of a circle
#include<stdio.h>
void area_circumferenc();
void area_circumferenc(){
 float r,a,c;
 printf("Enter radius:\n");
 scanf("%f",&r);
 a=3.14*r*r;
 printf("Area of circle:- %f\n",a); 
 c=2*3.14*r;
 printf("Circumference of circle: %f\n",c); 

}
int main(){
 area_circumferenc();
return 0;
}
