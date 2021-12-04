// Find a lower triangular matrix
#include<stdio.h>
void lower(){
 int r,c,a[3][3];
  printf("enter the elemetns of matrixs (3x3)\n");
   for(r=0;r<3;r++)
    {
     for(c=0;c<3;c++)
       scanf("%d",&a[r][c]);
    }
  printf("matrix is ....\n");
   for(r=0;r<3;r++){
     for(c=0;c<3;c++)
       printf("%d ",a[r][c]);
       
       printf("\n");
   }
     printf("Lower triangular is \n");
  for(r=0;r<3;r++){
    for(c=0;c<3;c++)
     {
      if(r>=c)
      printf("%3d",a[r][c]);
     }
     printf("\n");
  }
}
int main(){
  lower();
return 0;
} 
