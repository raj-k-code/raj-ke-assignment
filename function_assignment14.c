// greatest number among three number
#include<stdio.h>
void greater();
void greater(){
 int a,b,c;
 printf("Enter three numbers:\n");
 scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
  printf("greatest number: %d\n",a);
else if(b>c)
      printf("greatest number: %d\n",b);
     else
       printf("greatest number: %d\n",c);


}
int main(){
  greater();
return 0;
}
