//Identity matrix in c
#include<stdio.h>
void identiy(){
 int r,c,a[3][3];
  printf("enter the elements\n");
   for(r=0;r<3;r++)
    {
     for(c=0;c<3;c++)
       scanf("%d",&a[r][c]);
    }
   for(r=0;r<3;r++)
    {
     for(c=0;c<3;c++)
      {
        if(r==c)
         a[r][c]=1;
        else
         a[r][c]=0;
      }
    }
 printf("Identity matrix.....\n");
   for(r=0;r<3;r++)
    {
     for(c=0;c<3;c++)
       printf("%d",a[r][c]);
 
      printf("\n");
    }
}
int main(){
  identity();
return 0;
}
