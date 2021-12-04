//Interchange diagonal of a matrix
#include<stdio.h>
void inter(){
  int i,j,r,c,a[10][10],temp;
      printf("Enter Number of rows and columns:");
     scanf("%d %d", &i, &j); 
     printf("Please Enter the Matrix Elements \n");
      for(r=0;r<i;r++)
       {
   	for(c=0;c<j;c++)
      	  scanf("%d", &a[r][c]);
       }  	
   if(r==c)
    {
	      for(r=0;r<i;r++)
		{
			temp = a[r][r];
			a[r][r]=a[r][i-r-1];
			a[r][i-r-1]=temp;
		}		
	  printf("Elemnts after Interchanging Diagonals are: \n");
	    for(r=0;r<j;r++){
	   	for(c=0;c<i;c++)
	      	printf("%d\t",a[r][c]);
	   
	    	printf("\n");
            }
   } 
   else
  printf(" Matrix is Not a Square matrix" );
}
int main(){
  inter();
 return 0;
}
