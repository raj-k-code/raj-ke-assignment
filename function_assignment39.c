// input angles of triangle and check whether the traingle is vailid or not
#include<stdio.h>
void triangle(){
 int a,b,c,sum;
 printf("enter three angles of traingles\n");
 scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
if(sum==180)
 printf("Traingle is valid\n");
else
printf("traingle is not valid\n");

}

int main(){
 triangle();
return 0;
}

