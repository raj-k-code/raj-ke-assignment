//Factorial of a Given Number

#include<stdio.h>

void factorial();
void factorial(){
  int i,n,f=1;
  printf("Enter number to get it's factorial:\n");
  scanf ("%d",&n);
  for(i=1; i<=n; i++)
 {
   f=f*i;
 }
 printf("Factorial : %d\n",f);
}

int main()
{
 factorial();
  return 0;
}
