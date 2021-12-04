//Check the symmetric matrix
#include<stdio.h> 
void check(){
int i, j, rows, columns, a[10][10], b[10][10], Count = 1;  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++){
   		for(columns = 0;columns < j;columns++)
    		scanf("%d", &a[rows][columns]);
  	}
 	for(rows = 0; rows < i; rows++){
   		for(columns = 0;columns < j; columns++)
      	         	b[columns][rows] = a[rows][columns];
    	}
     
 	for(rows = 0; rows < i; rows++){
   		for(columns = 0; columns < j; columns++){
    		     if(a[rows][columns] != b[rows][columns])
    		     {
    			Count++;  
			break;  		
		     }
   	 	}
  	}
  	if(Count == 1)
  		printf("\n The Matrix that you entered is a Symmetric Matrix ");
	else
		printf("\n The Matrix that you entered is Not a Symmetric Matrix ");
 	
}
int main(){
 check();
 return 0;
}
