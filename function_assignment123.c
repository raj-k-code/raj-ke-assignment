//The upper triangular matrix
#include<stdio.h>
void upper(){
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
     printf("upper triangular is \n");
  for(r=0;r<3;r++){
    for(c=0;c<3;c++)
     {
      if(r<=c)
      printf("%3d",a[r][c]);
      else
      printf("   ");
     }
     printf("\n");
  }
}
int main(){
  upper();
return 0;
} 
