//Read Integer (N) and Print the First Three Powers (N^1, N^2, N^3)
#include <stdio.h>

void power();
void power(){
int x,n,i=1,p,f=1;
 printf("enter number(x):\n");
 scanf("%d",&x);
 printf("enter power(n):\n");
 scanf("%d",&n);
while(i<=n)
{ 
    p=i;f=1;
   while(p!=0)
   { f=f*x;
     p--;
   } 
   printf("(N^1, N^2, N^3):%d\n",f);
 
 i++;
}  
  
}
int main()
{
 power();
}
