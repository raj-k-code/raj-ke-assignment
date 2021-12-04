//Find the Sum of minor  diagonal elements of a matrics
#include<stdio.h>
void sum(){
int r,c,a[3][3],sum=0;
  printf("enter the elemetns of matrics\n");
   for(r=0;r<3;r++)
    {
     for(c=0;c<3;c++)
       scanf("%d",&a[r][c]);
    }
    for(r=0,c=2;r<3;r++,c--)
      sum=sum+a[r][c];
    printf("sum is %d\n",sum);
 

}
int main()
{
  sum();
 return 0;
}
