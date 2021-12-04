//Multiply two matrices
#include <stdio.h> 
void multiply(){
  int r,c,k,sum = 0;
  int first[3][3],second[3][3],multiply[3][3]; 
  printf("Enter elements of first matrix\n"); 
  for (r = 0; r <3; r++){
    for (c=0;c<3; c++)
      scanf("%d",&first[r][c]);
  }
    printf("Enter elements of second matrix\n");
    for (r=0;r<3;r++){
      for (c=0;c<3;c++)
        scanf("%d",&second[r][c]);
    } 
    for (r = 0;r<3;r++) {
        for (c=0;c<3;c++) {
           for (k=0;k<3;k++){
             sum = sum + first[r][k]*second[k][c];
           } 
            multiply[r][c] = sum;
            sum=0;
        }
   }
    printf("After multiplication matrics:\n");
 
    for (r=0;r<3;r++){
      for (c=0;c<3;c++)
        printf("%d\t", multiply[r][c]);
      printf("\n");
    }
}
int main(){
    multiply(); 
  return 0;
}
