//Perform scalar matrix multiplication
#include<stdio.h>
void scalar(){
 int a[3][3];
  int r,c,n;   
    printf("enter the elements of matrix 3x3\n");
     for(r=0;r<3;r++)
      {
       for(c=0;c<3;c++)
         scanf("%d",&a[r][c]);
      }
 printf("enter any number to multiply\n");
    scanf("%d",&n);    
     for(r=0;r<3;r++)
      {
       for(c=0;c<3;c++)
         a[r][c] = n * a[r][c];  
      }    
   printf("result matrics\n");
  for(r=0;r<3;r++)
      {
       for(c=0;c<3;c++)
         printf("%d\t",a[r][c]);
        printf("\n");
      }
}

int main(){
  scalar();
  return 0;
}	
