//Persentage of 5 subject
#include<stdio.h>
void result();
void result(){
float h,e,m,p,c,total,per;

printf("enter 5 subject number:\n");
printf("enter Hindi marks:\n");
scanf("%f",&h);
printf("enter English marks:\n");
scanf("%f",&e);
printf("enter Math marks:\n");
scanf("%f",&m);
printf("enter physics marks:\n");
scanf("%f",&p);
printf("enter chemistry marks:\n");
scanf("%f",&c);


total=h+e+m+p+c;
printf("grand total:%f\n",total);

per=(h+e+m+p+c)/5;
printf("=====================\n");
printf("persentage:%f\n",per);
printf("=====================\n");

}
int main(){
 result();
return 0;
}
