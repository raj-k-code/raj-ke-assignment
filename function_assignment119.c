// Sum of the main diagonal elements of a matrics
#include<stdio.h>
int sum(){
 int r,c,a[3][3],sum=0;
  
   printf("enter the matrix 3x3\n");
    for(r=0;r<3;r++)
     {
      for(c=0;c<3;c++)
        scanf("%d",&a[r][c]);
     }
    for(r=0;r<3;r++)
      sum=sum+a[r][r];
    printf("the sum main diagonal is: %d\n",sum);

}
int main(){
  sum();
 return 0;
}
