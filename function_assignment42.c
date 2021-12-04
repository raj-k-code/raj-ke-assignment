//Find all roots of quadratic equation
#include<stdio.h>
#include<math.h>
void roots(){
 float a,b,c,D;
 float root1,root2,root3;
 printf("Enter the value of a,b,c for equation(ax^2+bx+c)\n");
 scanf("%f%f%f",&a,&b,&c);
 D=(b*b)-(4*a*c);
printf("All roots of this equation(%.2fx^2 + %.2fx + %.2f):\n",a,b,c);

 if(D>0){
   root1= (-b + sqrt(D))/(2*a);
   root2= (-b - sqrt(D))/(2*a);
  printf("Root1=%.2f\nRoot2=%.2f\n",root1,root2);
}

 else if(D<0){
        root1=root2= (-b)/(2*a);
        root3=sqrt(-D)/(2*a);
        printf("Root1=%.2f + i %.2f\nRoot2=%.2f - i %2f\n ",root1,root3,root2,root3); 
      } 
 
     else{
         root1=root2= (-b)/(2*a);
       printf("Root1=%.2f\nRoot2=%.2f\n",root1,root2);

      }

}
int main(){
  roots();
return 0;
}
