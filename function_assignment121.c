// Find the sum of each row and column of a matrix
#include<stdio.h> 
void matrix(){
 int i,j,r,c,a[10][10],Sum;
   printf("\n Please Enter Number of rows and columns  :  ");
   scanf("%d %d", &i, &j);
    printf("\n Please Enter the Matrix Elements \n");
      for(r=0;r<i;r++)
  	{
   	 for(c=0;c<j;c++)
      	   scanf("%d", &a[r][c]);
        }
     for(r=0;r<i;r++)
      {
  	Sum = 0;
  	for(c=0;c<j;c++)
  	  Sum=Sum+a[r][c];
   	
   	printf("\n The Sum of Elements of a Rows in a Matrix =  %d", Sum );
  	
      }
 	for(r=0;r<i;r++)
  	{
  	  Sum=0;
  	  for(c=0;c<j;c++)
  	   Sum =Sum+a[c][r];
         printf("\n The Sum of Elements of a Columns in a Matrix =  %d\n", Sum );
       }  	

}
int main(){
  matrix();
 return 0;
}
