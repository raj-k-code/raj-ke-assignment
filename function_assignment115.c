//Subtract two matrix
#include <stdio.h>
void  sub(){
  int r, c, a[5][5], b[5][5], sub[5][5], i, j;
  printf("Enter the number of rows (between 1 and 5): ");
  scanf("%d", &r);
  printf("Enter the number of columns: ");
  scanf("%d", &c);
  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
	  for (i = 0; i < r; i++){
	  
	    for (j = 0; j < c; j++)
	      sub[i][j] = a[i][j] - b[i][j];
	    }
  printf("\nSubtraction of two matrices: \n");
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++) {
      printf("%d ", sub[i][j]);
      if (j == c - 1)
        printf("\n");
    }

}

int main() {
   sub();
  return 0;
}


