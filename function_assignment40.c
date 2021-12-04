// input all sides of a triangle and check whether the traingle is vailid or not
#include<stdio.h>
void triangle(){
 int a,b,c,sum;
 printf("enter three sides of traingles\n");
 scanf("%d%d%d",&a,&b,&c);

if(a+b>c || b+c>a || a+c>b)
 printf("Traingle is valid\n");
else
printf("traingle is not valid\n");

}

int main(){
 triangle();
return 0;
}

